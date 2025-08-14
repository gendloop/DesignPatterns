#pragma once
/**
 * @file	state.h
 * @brief	状态模式
 * @note    - LightSwitch
 * @author  gendloop
 */

// c++
#include <iostream>
#include <memory>
#include <unordered_map>

enum class LIGHT_STATE_TYPE {
    ON,
    OFF
};

class LightState {
public:
    explicit LightState(LIGHT_STATE_TYPE state);
    ~LightState() = default;
    virtual void trigger() = 0;

    LIGHT_STATE_TYPE getState() const;

protected:
    LIGHT_STATE_TYPE state_;
};

class LightOn : public LightState {
public:
    LightOn();
    void trigger() override;
};

class LightOff : public LightState {
public:
    LightOff();
    void trigger() override;
};

class LightSwitch {
public:
    void switchLightState();

private:
    LIGHT_STATE_TYPE state_type_ = LIGHT_STATE_TYPE::OFF;
    static std::unordered_map<LIGHT_STATE_TYPE, std::shared_ptr<LightState>> s_light_states_;
};

