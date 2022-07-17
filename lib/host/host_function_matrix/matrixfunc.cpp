// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2019-2022 Second State INC

#include "host/host_function_matrix/matrixfunc.h"
#include <iostream>

namespace WasmEdge {
namespace Host {

Expect<double> HostFuncMatrixDeterminant::body(Runtime::Instance::MemoryInstance *MemInst,
                                               uint32_t index) {
  // Check memory instance from module.
  if (MemInst == nullptr) {
    return Unexpect(ErrCode::ExecutionFailed);
  }

  Env.res = 0;
  Env.res += Env.MatrixQueue[index][0][0] * Env.MatrixQueue[index][1][1] * Env.MatrixQueue[index][2][2];
  Env.res += Env.MatrixQueue[index][0][1] * Env.MatrixQueue[index][1][2] * Env.MatrixQueue[index][2][0];
  Env.res += Env.MatrixQueue[index][0][2] * Env.MatrixQueue[index][1][0] * Env.MatrixQueue[index][2][1];
  Env.res -= Env.MatrixQueue[index][0][0] * Env.MatrixQueue[index][1][2] * Env.MatrixQueue[index][2][1];
  Env.res -= Env.MatrixQueue[index][0][2] * Env.MatrixQueue[index][1][1] * Env.MatrixQueue[index][2][0];
  Env.res -= Env.MatrixQueue[index][0][1] * Env.MatrixQueue[index][1][0] * Env.MatrixQueue[index][2][2];
  return Env.res;
}

Expect<void> HostFuncMatrixPrint::body([[maybe_unused]] Runtime::Instance::MemoryInstance *MemInst,
                                       uint32_t index) {
  std::cout << "the No." << index << " matrix:" << std::endl;
  for(int i=0; i!=3; ++i) {
    for(int j=0; j!=3; ++j) {
      std::cout << Env.MatrixQueue[index][i][j] << "\t";
    }
    std::cout << std::endl;
  }
  return {};
}

Expect<uint32_t> HostFuncMatrixInput::body(Runtime::Instance::MemoryInstance *MemInst,
                                           uint32_t InputPtr, uint32_t InputLen) {
  // Check memory instance from module.
  if (MemInst == nullptr) {
    return Unexpect(ErrCode::ExecutionFailed);
  }

  char *Input = MemInst->getPointer<char *>(InputPtr);
  int tmp=0, count=0;
  bool neg=false;
  for(unsigned int i=0; i!=InputLen; ++i) {
    if(*Input!=' '){
      if(*Input=='-'){
        neg = true;
        ++Input;
        continue;
      }
      tmp *= 10;
      tmp += (int)(*Input-'0');
      ++Input;
      continue;
    }
    if(count++%3==0) Env.NewMatrix.push_back({});
    if(neg) Env.NewMatrix.back().push_back(tmp*-1);
    else Env.NewMatrix.back().push_back(tmp);
    tmp = 0;
    ++Input;
    neg = false;
  }
  Env.MatrixQueue.push_back(std::move(Env.NewMatrix));
  return Env.MatrixQueue.size();
}



} // namespace Host
} // namespace WasmEdge
