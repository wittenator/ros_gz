// Copyright 2022 Open Source Robotics Foundation, Inc.
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

#ifndef SERVICE_FACTORIES__ROS_IGN_INTERFACES_HPP_
#define SERVICE_FACTORIES__ROS_IGN_INTERFACES_HPP_

#include <memory>
#include <string>

#include "service_factory_interface.hpp"

namespace ros_ign_bridge
{

std::shared_ptr<ServiceFactoryInterface>
get_service_factory__ros_ign_interfaces(
  const std::string & ros_type_name,
  const std::string & ign_req_type_name,
  const std::string & ign_rep_type_name);

}  // namespace ros_ign_bridge

#endif  // SERVICE_FACTORIES__ROS_IGN_INTERFACES_HPP_