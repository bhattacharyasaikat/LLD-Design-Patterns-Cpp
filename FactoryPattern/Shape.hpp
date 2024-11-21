#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <iostream>

// Abstract Product
class Shape {
public:
    virtual void draw() const = 0; // Pure virtual function
    virtual ~Shape() = default;
};

#endif // SHAPE_HPP
