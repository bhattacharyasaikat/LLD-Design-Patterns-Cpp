#ifndef SHAPEFACTORY_HPP
#define SHAPEFACTORY_HPP

#include <string>
#include <stdexcept>
#include "Circle.hpp"
#include "Rectangle.hpp"

// Factory Class
class ShapeFactory {
public:
    static Shape* createShape(const std::string& type) {
        if (type == "Circle") {
            return new Circle();
        } else if (type == "Rectangle") {
            return new Rectangle();
        } else {
            throw std::invalid_argument("Invalid shape type");
        }
    }
};

#endif // SHAPEFACTORY_HPP
