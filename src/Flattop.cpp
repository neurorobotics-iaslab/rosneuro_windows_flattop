#include "rosneuro_windows_flattop/Flattop.hpp"
#include "pluginlib/class_list_macros.h"

PLUGINLIB_EXPORT_CLASS(rosneuro::Flattop<int>,    rosneuro::Window<int>)
PLUGINLIB_EXPORT_CLASS(rosneuro::Flattop<float>,  rosneuro::Window<float>)
PLUGINLIB_EXPORT_CLASS(rosneuro::Flattop<double>, rosneuro::Window<double>)

