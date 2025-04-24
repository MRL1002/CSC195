#include <iostream>
#include "Point.h"
using namespace Izy;
using namespace std;

//overload NON-memborly
// requiers both to function
//Point& operator + (Point& p1, Point p2) {
//    
//    Point nPoint;
//
//    nPoint.x = p1.x += p2.x;
//    nPoint.y = p1.y += p2.y;
//    
//    return nPoint;
//
//    //p1.x += p2.x;
//    //p1.y += p2.y;
//}

//void operator << (ostream& ostream, Point pt) {
//    ostream << pt.x << "," << pt.y << endl;
//}

int main()
{
    
    Point point1(12,5);

    point1.Write(cout);

    Point point2(1, 1);

    // oding it manually
    //point1.Add(point2);

    // operator overloading
    //point1 + point2;    // gives operators user defines meanings

    //point1.Write(cout);

    // new point that displays the sum of pt1 and pt2
    Point point3;

    point3 = (point1 + point2) * 2;

    //point3.Write(cout);

    cout << point3 << point2;

}