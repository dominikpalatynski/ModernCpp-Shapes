#pragma once

#include "Shape.hpp"

class Circle final : public Shape
{

public:
    using Shape::Shape;
    Circle() = delete;
    Circle(double r);
    Circle(const Circle &other) = default;

    double getArea() const override;
    double getPerimeter() const override;
    void print() const override;

    double getRadius() const;

private:
    // Circle(); // doesn't allow to call default constructor
    Color color = Color::White;
    double r_;
};
