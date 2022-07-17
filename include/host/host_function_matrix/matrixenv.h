// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2019-2022 Second State INC

#pragma once

#include <cstdint>
#include <string>
#include <vector>

namespace WasmEdge {
namespace Host {

class HostFuncMatrixEnvironment {
public:
  /// Define your environment variables and data structures

  /// Const

  /// Variables
  int res;
  std::vector<std::vector<std::vector<int>>> MatrixQueue={
                                                            {
                                                              {2,-5,3},
                                                              {0,7,-2},
                                                              {-1,4,1}
                                                            },
                                                            {
                                                              {3,7,0},
                                                              {8,0,-2},
                                                              {0,-4,-5}
                                                            },
                                                            {
                                                              {-3,9,5},
                                                              {-4,0,1},
                                                              {6,3,0}
                                                            }
                                                          };
  std::vector<std::vector<int>> NewMatrix;
  
  /// Initial Configurations
};

} // namespace Host
} // namespace WasmEdge
