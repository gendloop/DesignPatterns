/**
 * @file	abstract_factory.cpp
 * @brief	抽象工厂模式
 * @note    - IColorShapeFactory
 * @author  gendloop
 */

// local
#include "abstract_factory.h"

std::shared_ptr<IColorFactory> ColorShape2DFatory::createColorFactory() const
{
    std::cout << "Creating 2D Color Factory" << std::endl;
    return std::shared_ptr<IColorFactory>();
}

std::shared_ptr<IShapeFactory> ColorShape2DFatory::createShapeFactory() const
{
    std::cout << "Creating 2D Shape Factory" << std::endl;
    return std::shared_ptr<IShapeFactory>();
}

std::shared_ptr<IColorFactory> ColorShape3DFatory::createColorFactory() const
{
    std::cout << "Creating 3D Color Factory" << std::endl;
    return std::shared_ptr<IColorFactory>();
}

std::shared_ptr<IShapeFactory> ColorShape3DFatory::createShapeFactory() const
{
    std::cout << "Creating 3D Shape Factory" << std::endl;
    return std::shared_ptr<IShapeFactory>();
}
