/**
 * @file	singleton.cpp
 * @brief	单例模式
 * @author  gendloop
 */

// local
#include "singleton.h"

std::unique_ptr<EagerSingleton> EagerSingleton::s_instance_ = std::make_unique<EagerSingleton>();

