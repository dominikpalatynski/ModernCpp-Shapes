#pragma once

enum class Color : unsigned char
{
    White = 0x01,
    Red = 0x02,
    Orange = 0x03,

};
class Shape
{

public:
    Shape() = default;
    Shape(Color c);

    virtual ~Shape() {}

    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    virtual void print() const;

private:
    Color color = Color::Orange;
};
