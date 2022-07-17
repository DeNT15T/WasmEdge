// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2019-2022 Second State INC

#pragma once

#include "common/errcode.h"
#include "host/host_function_matrix/matrixenv.h"
#include "runtime/hostfunc.h"

namespace WasmEdge {
namespace Host {

template <typename T> class HostFuncMatrix : public Runtime::HostFunction<T> {
public:
  HostFuncMatrix(HostFuncMatrixEnvironment &HostEnv)
      : Runtime::HostFunction<T>(0), Env(HostEnv) {}

protected:
  HostFuncMatrixEnvironment &Env;
};

} // namespace Host
} // namespace WasmEdge
