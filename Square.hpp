#pragma once

#include "Rectangle.hpp"

class Square : public Rectangle
{
public:
    // using Shape::Shape;
    Square() = delete;
    Square(double x);
    Square(const Square &other) = default;

    double getArea() const override;
    double getPerimeter() const override;
    void print() const override;

private:
    double getY();
    // Square();

    Color color = Color::Red;
};
