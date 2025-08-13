#include "pch.h"
/**
 * @file	test_template.cpp
 * @brief	测试模板模式
 * @author  gendloop
 */

// local
#include "../src/behavioral-patterns/template.h"

TEST(TestTemplate, ChargeDevice) {
    ChargePhone phone;
    phone.run();
    
    ChargeComputer computer;
    computer.run();
    
    ChargeEV ev;
    ev.run();
}
