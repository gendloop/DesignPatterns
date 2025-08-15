/**
 * @file	factory.cpp
 * @brief	工厂模式
 * @note    - ShapeFactory
 * @author  gendloop
 */

// local
#include "factory.h"

SHAPE_TYPE Circle::getType() const
{
    return SHAPE_TYPE::CIRCLE;
}

void Circle::draw() const
{
    std::cout << "Draw Circle" << std::endl;
}

SHAPE_TYPE Square::getType() const
{
    return SHAPE_TYPE::SQUARE;
}

void Square::draw() const
{
    std::cout << "Draw Square" << std::endl;
}

std::shared_ptr<Shape> ShapeFactory::createShape(SHAPE_TYPE type)
{
    switch (type) {
        case SHAPE_TYPE::CIRCLE:
            return std::make_shared<Circle>();
        case SHAPE_TYPE::SQUARE:
            return std::make_shared<Square>();
        default:
            return nullptr;
    }
}

COLOR_TYPE Red::getType() const
{
    return COLOR_TYPE::RED;
}

void Red::fill() const
{
    std::cout << "Fill with Red" << std::endl;
}

COLOR_TYPE Green::getType() const
{
    return COLOR_TYPE::GREEN;
}

void Green::fill() const
{
    std::cout << "Fill with Green" << std::endl;
}

std::shared_ptr<Color> ColorFactory::createColor(COLOR_TYPE type)
{
    switch (type) {
        case COLOR_TYPE::RED:
            return std::make_shared<Red>();
        case COLOR_TYPE::GREEN:
            return std::make_shared<Green>();
        default:
            return nullptr;
    }
}
