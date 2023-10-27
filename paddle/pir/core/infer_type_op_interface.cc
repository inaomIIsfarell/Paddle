// Copyright (c) 2023 PaddlePaddle Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "paddle/pir/core/infer_type_op_interface.h"

namespace pir {

bool InferShapedTypeOpInterface::ReifyReturnTypeShapes(
    Builder& builder,
    std::vector<OpOperand> operands,
    std::vector<Value>& reified_return_shapes) {
  return impl_->reify_return_type_shapes(
      builder, operands, reified_return_shapes);
}
}  // namespace pir

IR_DEFINE_EXPLICIT_TYPE_ID(pir::InferShapedTypeOpInterface)