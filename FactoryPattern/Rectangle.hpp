#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Shape.hpp"

// Concrete Product: Rectangle
class Rectangle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing a Rectangle\n";
    }
};

#endif // RECTANGLE_HPP
