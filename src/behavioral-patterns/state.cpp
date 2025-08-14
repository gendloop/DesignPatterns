/**
 * @file	state.cpp
 * @brief	状态模式
 * @note    - LightSwitch
 * @author  gendloop
 */

// local
#include "state.h"

std::unordered_map<LIGHT_STATE_TYPE, std::shared_ptr<LightState>>
LightSwitch::s_light_states_ = {
    { LIGHT_STATE_TYPE::ON, std::make_shared<LightOn>() },
    { LIGHT_STATE_TYPE::OFF, std::make_shared<LightOff>() },
};

LightOn::LightOn()
    : LightState(LIGHT_STATE_TYPE::ON)
{
}

void LightOn::trigger()
{
    std::cout << "The light is turn on." << std::endl;
}

LightState::LightState(LIGHT_STATE_TYPE state)
    : state_(state)
{
}

LIGHT_STATE_TYPE LightState::getState() const
{
    return state_;
}

LightOff::LightOff()
    : LightState(LIGHT_STATE_TYPE::OFF)
{
}

void LightOff::trigger()
{
    std::cout << "The light is turn off." << std::endl;
}

void LightSwitch::switchLightState()
{
    if (state_type_ == LIGHT_STATE_TYPE::OFF) { state_type_ = LIGHT_STATE_TYPE::ON; }
    else { state_type_ = LIGHT_STATE_TYPE::OFF; }

    s_light_states_.at(state_type_)->trigger();
}
