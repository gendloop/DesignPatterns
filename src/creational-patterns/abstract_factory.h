#pragma once
/**
 * @file	abstract_factory.h
 * @brief	抽象工厂模式
 * @note    - IColorShapeFactory
 * @author  gendloop
 */

// local
#include <iostream>
#include <memory>

class IColorFactory;
class IShapeFactory;

class IColorShapeFactory {
public:
    ~IColorShapeFactory() = default;
    virtual std::shared_ptr<IColorFactory> createColorFactory() const = 0;
    virtual std::shared_ptr<IShapeFactory> createShapeFactory() const = 0;
};

class ColorShape2DFatory : public IColorShapeFactory {
    public:
    std::shared_ptr<IColorFactory> createColorFactory() const override;
    std::shared_ptr<IShapeFactory> createShapeFactory() const override;
};

class ColorShape3DFatory : public IColorShapeFactory {
    public:
    std::shared_ptr<IColorFactory> createColorFactory() const override;
    std::shared_ptr<IShapeFactory> createShapeFactory() const override;
};
