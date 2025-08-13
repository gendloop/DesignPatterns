#include "template.h"
/**
 * @file	template.cpp
 * @brief	模板模式
 * @note    - ChargeDevice
 * @author  gendloop
 */

void ChargeDevice::run()
{
    powerOn();
    charge();
    powerOff();
}

void ChargeDevice::powerOn()
{
}

void ChargeDevice::powerOff()
{
}

void ChargeDevice::charge()
{
}

void ChargePhone::powerOn()
{
    std::cout << "Phone is powered on." << std::endl;
}
void ChargePhone::powerOff()
{
    std::cout << "Phone is powered off." << std::endl;
}
void ChargePhone::charge()
{
    std::cout << "Phone is charging." << std::endl;
}

void ChargeComputer::powerOn()
{
    std::cout << "Computer is powered on." << std::endl;
}
void ChargeComputer::powerOff()
{
    std::cout << "Computer is powered off." << std::endl;
}
void ChargeComputer::charge()
{
    std::cout << "Computer is charging." << std::endl;
}

void ChargeEV::powerOn()
{
    std::cout << "EV is powered on." << std::endl;
}
void ChargeEV::powerOff()
{
    std::cout << "EV is powered off." << std::endl;
}
void ChargeEV::charge()
{
    std::cout << "EV is charging." << std::endl;
}
