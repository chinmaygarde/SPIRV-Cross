/*
 * Copyright 2015-2017 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "spirv_cross/external_interface.h"
#include "spirv_cross/internal_interface.hpp"

void spirv_cross_set_stage_input(spirv_cross_shader_t *shader, unsigned location, void *data, size_t size)
{
  shader->set_stage_input(location, data, size);
}

void spirv_cross_set_stage_output(spirv_cross_shader_t *shader, unsigned location, void *data, size_t size)
{
  shader->set_stage_output(location, data, size);
}

void spirv_cross_set_uniform_constant(spirv_cross_shader_t *shader, unsigned location, void *data, size_t size)
{
  shader->set_uniform_constant(location, data, size);
}

void spirv_cross_set_resource(spirv_cross_shader_t *shader, unsigned set, unsigned binding, void **data, size_t size)
{
  shader->set_resource(set, binding, data, size);
}

void spirv_cross_set_push_constant(spirv_cross_shader_t *shader, void *data, size_t size)
{
  shader->set_push_constant(data, size);
}

void spirv_cross_set_builtin(spirv_cross_shader_t *shader, spirv_cross_builtin builtin, void *data, size_t size)
{
  shader->set_builtin(builtin, data, size);
}
