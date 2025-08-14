#pragma once
/**
 * @file	state.h
 * @brief	状态模式
 * @note    - LightSwitch
 * @author  gendloop
 */

// c++
#include <iostream>

enum LIGHT_STATE {
    ON,
    OFF
};

class LightState {
public:
    ~LightState() = default;
    virtual void trigger() = 0;
};
