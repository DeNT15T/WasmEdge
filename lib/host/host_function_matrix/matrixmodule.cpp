// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2019-2022 Second State INC

#include "host/host_function_matrix/matrixmodule.h"
#include "host/host_function_matrix/matrixfunc.h"

namespace WasmEdge {
namespace Host {

/// Register your functions in module.
HostFuncMatrixModule::HostFuncMatrixModule() : ModuleInstance("host_function_matrix") {
  addHostFunc("host_function_matrix_determinant",
              std::make_unique<HostFuncMatrixDeterminant>(Env));
  addHostFunc("host_function_matrix_print",
              std::make_unique<HostFuncMatrixPrint>(Env));
  addHostFunc("host_function_matrix_input",
              std::make_unique<HostFuncMatrixInput>(Env));
}

} // namespace Host
} // namespace WasmEdge
