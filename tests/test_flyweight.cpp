#include "pch.h"
/**
 * @file	test_flyweight.cpp
 * @brief	测试享元模式
 * @author  gendloop
 */

// local
#include "../src/structural-patterns/flyweight.h" 

TEST(TestFlyweight, IconFlyweight) {
    IconFlyweight icon_flyweight;
    auto save_icon1 = icon_flyweight.getIcon("save");
    save_icon1->draw();
    auto save_icon2 = icon_flyweight.getIcon("save");
    save_icon2->draw();
    EXPECT_EQ(save_icon1, save_icon2);
    auto open_icon1 = icon_flyweight.getIcon("open");
    open_icon1->draw();
    auto open_icon2 = icon_flyweight.getIcon("open");
    open_icon2->draw();
    EXPECT_EQ(open_icon1, open_icon2);
}
