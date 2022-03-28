// Copyright (c) 2019 PaddlePaddle Authors. All Rights Reserved.
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

#ifndef __NNADAPTER_DRIVER_GOOGLE_XNNPACK_CONVERTER_ALL_H__  // NOLINT
#define __NNADAPTER_DRIVER_GOOGLE_XNNPACK_CONVERTER_ALL_H__

REGISTER_CONVERTER(ADD, ValidateElementwise, ConvertElementwise)
REGISTER_CONVERTER(DIV, ValidateElementwise, ConvertElementwise)
REGISTER_CONVERTER(MUL, ValidateElementwise, ConvertElementwise)
REGISTER_CONVERTER(RESHAPE, ValidateReshape, ConvertReshape)
REGISTER_CONVERTER(SOFTMAX, ValidateSoftmax, ConvertSoftmax)
REGISTER_CONVERTER(SUB, ValidateElementwise, ConvertElementwise)

#endif  // NOLINT