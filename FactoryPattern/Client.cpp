#include "ShapeFactory.hpp"
#include <iostream>
int main() {
    // Client uses factory to create objects
    auto shape1 = ShapeFactory::createShape("Circle");
    shape1->draw();

    auto shape2 = ShapeFactory::createShape("Rectangle");
    shape2->draw();

    return 0;
}
