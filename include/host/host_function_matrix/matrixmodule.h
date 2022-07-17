// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2019-2022 Second State INC

#pragma once

#include "host/host_function_matrix/matrixenv.h"
#include "runtime/instance/module.h"

#include <cstdint>

namespace WasmEdge {
namespace Host {

class HostFuncMatrixModule : public Runtime::Instance::ModuleInstance {
public:
  HostFuncMatrixModule();

  HostFuncMatrixEnvironment &getEnv() { return Env; }

private:
  HostFuncMatrixEnvironment Env;
};

} // namespace Host
} // namespace WasmEdge
