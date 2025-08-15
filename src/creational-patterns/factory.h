#pragma once
/**
 * @file	factory.h
 * @brief	工厂模式
 * @note    - ShapeFactory
 *          - ColorFactory
 * @author  gendloop
 */

// c++
#include <iostream>
#include <memory>

enum class SHAPE_TYPE {
    CIRCLE,
    SQUARE,
};

class Shape {
public:
    ~Shape() = default;
    virtual SHAPE_TYPE getType() const = 0;
    virtual void draw() const = 0;
};

class Circle : public Shape {
public:
    SHAPE_TYPE getType() const override;
    void draw() const override;
};

class Square : public Shape {
public:
    SHAPE_TYPE getType() const override;
    void draw() const override;
};

class ShapeFactory {
public:
    std::shared_ptr<Shape> createShape(SHAPE_TYPE type);
};

enum class COLOR_TYPE {
    RED,
    GREEN,
};

class Color {
public:
    ~Color() = default;
    virtual COLOR_TYPE getType() const = 0;
    virtual void fill() const = 0;
};

class Red : public Color {
public:
    COLOR_TYPE getType() const override;
    void fill() const override;
};

class Green : public Color {
public:
    COLOR_TYPE getType() const override;
    void fill() const override;
};

class ColorFactory {
public:
    std::shared_ptr<Color> createColor(COLOR_TYPE type);
};
