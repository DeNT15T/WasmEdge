// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2019-2022 Second State INC

#pragma once

#include "common/defines.h"
#include "host/host_function_matrix/matrixbase.h"

namespace WasmEdge {
namespace Host {

class HostFuncMatrixDeterminant : public HostFuncMatrix<HostFuncMatrixDeterminant> {
public:
  HostFuncMatrixDeterminant(HostFuncMatrixEnvironment &HostEnv)
      : HostFuncMatrix(HostEnv) {}
  Expect<double> body(Runtime::Instance::MemoryInstance *MemInst, uint32_t index);
};

class HostFuncMatrixPrint : public HostFuncMatrix<HostFuncMatrixPrint> {
public:
  HostFuncMatrixPrint(HostFuncMatrixEnvironment &HostEnv)
      : HostFuncMatrix(HostEnv) {}
  Expect<void> body(Runtime::Instance::MemoryInstance *MemInst, uint32_t index);
};

class HostFuncMatrixInput : public HostFuncMatrix<HostFuncMatrixInput> {
public:
  HostFuncMatrixInput(HostFuncMatrixEnvironment &HostEnv)
      : HostFuncMatrix(HostEnv) {}
  Expect<uint32_t> body(Runtime::Instance::MemoryInstance *MemInst, uint32_t InputPtr, uint32_t InputLen);
};

} // namespace Host
} // namespace WasmEdge
