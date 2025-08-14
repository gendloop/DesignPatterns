#include "pch.h"
/**
 * @file	test_state.cpp
 * @brief	测试状态模式
 * @author  gendloop
 */

// local
#include "../src/behavioral-patterns/state.h"

TEST(TestState, LightSwitch) {
    LightSwitch switcher;
    switcher.switchLightState();
    switcher.switchLightState();
    switcher.switchLightState();
}
