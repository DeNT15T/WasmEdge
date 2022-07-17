# SPDX-License-Identifier: Apache-2.0
# SPDX-FileCopyrightText: 2019-2022 Second State INC

wasmedge_add_library(wasmedgeHostModuleHostFuncMatrix
  matrixfunc.cpp
  matrixmodule.cpp
)

target_link_libraries(wasmedgeHostModuleHostFuncMatrix
  PUBLIC
  wasmedgeCommon
  wasmedgeSystem
)
