#include "pch.h"
/**
 * @file	test_abstract_factory.cpp
 * @brief	测试抽象工厂模式
 * @author  gendloop
 */

// local
#include "../src/creational-patterns/abstract_factory.h"

TEST(TestAbstractFactory, ColorShape2DFactory) {
    ColorShape2DFatory factory2d;
    auto color_factory2d = factory2d.createColorFactory();
    auto shape_factory2d = factory2d.createShapeFactory();

    ColorShape3DFatory factory3d;
    auto color_factory_3d = factory3d.createColorFactory();
    auto shape_factory_3d = factory3d.createShapeFactory();
}
