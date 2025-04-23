#pragma once
#include <iostream>
using namespace std;

class Shape {
public:

    enum class shapeType {
        CIRCLE,
        RECTANGLE
    };

    Shape() {}
    ~Shape() {}

    virtual float Area() = 0;

    virtual shapeType getType() = 0;

};