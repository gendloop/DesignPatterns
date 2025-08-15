#include "pch.h"
/**
 * @file	test_factory.cpp
 * @brief	测试工厂模式
 * @author  gendloop
 */

// local
#include "../src/creational-patterns/factory.h"

TEST(TestFactory, ShapeFactory) {
    ShapeFactory factory;

    auto circle = factory.createShape(SHAPE_TYPE::CIRCLE);
    EXPECT_EQ(circle->getType(), SHAPE_TYPE::CIRCLE);
    circle->draw();

    auto square = factory.createShape(SHAPE_TYPE::SQUARE);
    EXPECT_EQ(square->getType(), SHAPE_TYPE::SQUARE);
    square->draw();
}

TEST(TestFactory, ColorFactory) {
    ColorFactory factory;

    auto red = factory.createColor(COLOR_TYPE::RED);
    EXPECT_EQ(red->getType(), COLOR_TYPE::RED);
    red->fill();

    auto green = factory.createColor(COLOR_TYPE::GREEN);
    EXPECT_EQ(green->getType(), COLOR_TYPE::GREEN);
    green->fill();
}
