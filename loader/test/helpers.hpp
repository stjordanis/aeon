/*
 Copyright 2015 Nervana Systems Inc.
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
*/

#pragma once

#include <vector>
#include <string>

#include "buffer_in.hpp"

using namespace std;

vector<string> buffer_to_vector_of_strings(buffer_in& b);
bool sorted(vector<string> words);
void dump_vector_of_strings(vector<string>& words);

void assert_vector_unique(vector<string>& words);
