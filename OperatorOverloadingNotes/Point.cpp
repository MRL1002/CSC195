#include "Point.h"

namespace Izy {

	void Point::Write(std::ostream& ostream)
	{

		ostream << x << "," << y << std::endl;

	}

	void Point::Add(Point& point)
	{

		x += point.x;
		y += point.y;

	}

	// operator overload in class, only requieres non-calling (right hand side) class's info
	// ex pt1 + p2, so we pass in pt2
	Point& Point::operator+(Point& pt2)
	{
		
		Point nPoint;

		nPoint.x = x + pt2.x;
		nPoint.y = y + pt2.y;

		return nPoint;

	}

	Point Point::operator*(float mlt)
	{

		return Point(x * mlt, y * mlt);

	}


	std::ostream& operator<<(std::ostream& ostream, Point pt)
	{
		ostream << "(" << pt.x << "," << pt.y << ")" << std::endl;

		// allow printing multiple values in one line
		return ostream;
	}

}

