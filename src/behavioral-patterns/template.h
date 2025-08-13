#pragma once
/**
 * @file	template.h
 * @brief	模板模式
 * @note    - ChargeDevice
 * @author  gendloop
 */

// c++
#include <iostream>

class ChargeDevice {
public:
    virtual ~ChargeDevice() = default;
    void run();

protected:
    virtual void powerOn();
    virtual void powerOff();
    virtual void charge();
};

class ChargePhone : public ChargeDevice {
protected:
    void powerOn() override;
    void powerOff() override;
    void charge() override;
};

class ChargeComputer : public ChargeDevice {
protected:
    void powerOn() override;
    void powerOff() override;
    void charge() override;
};

class ChargeEV : public ChargeDevice {
protected:
    void powerOn() override;
    void powerOff() override;
    void charge() override;
};
