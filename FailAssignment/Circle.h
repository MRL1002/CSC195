#pragma once
#include "Shape.h"

class Circle : public Shape {
public:
    Circle(float r) { m_radius = r; }
    ~Circle() {}

    float Area() override;

    shapeType getType() override { return shapeType::CIRCLE; }
    
    // unused function, when creating a circle, constructor already takes the radius
    //void SetRadius(float radius) const { radius = radius; }
    float GetRadius() { return m_radius; }

private:
    float m_radius;
};