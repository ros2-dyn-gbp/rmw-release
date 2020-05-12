// Copyright 2020 Open Source Robotics Foundation, Inc.
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

#include "gmock/gmock.h"
#include "rmw/security_options.h"

TEST(rmw_security_options, get_zero_init)
{
  rmw_security_options_t options = rmw_get_zero_initialized_security_options();
  EXPECT_EQ(options.enforce_security, RMW_SECURITY_ENFORCEMENT_PERMISSIVE);
  EXPECT_EQ(options.security_root_path, nullptr);
}

TEST(rmw_security_options, get_default_init)
{
  rmw_security_options_t options = rmw_get_default_security_options();
  EXPECT_EQ(options.enforce_security, RMW_SECURITY_ENFORCEMENT_PERMISSIVE);
  EXPECT_EQ(options.security_root_path, nullptr);
}
