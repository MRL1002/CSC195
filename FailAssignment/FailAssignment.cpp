#include <iostream>
#include <vector>
#include "Circle.h"
#include "Rectangle.h"

using namespace std;

int main() {
    vector<Shape*> shapes;

    Circle* c = new Circle(1.0f);
    Rectangle* r = new Rectangle(4.0f, 5.0f);

    c->SetRadius(3.0f);

    shapes.push_back(c);
    shapes.push_back(r);

    for (int i = 0; i < shapes.size(); i++)
    {
        if (shapes[i]->getType() == Shape::shapeType::RECTANGLE) {
            cout << "Area: " << shapes[i]->Area() << endl;
        }
        else {
            cout << "Radius: " << shapes[i]->Area() << endl;
        }

    }

    shapes.clear();

    return 0;
}