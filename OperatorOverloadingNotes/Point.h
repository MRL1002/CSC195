#pragma once
#include <iostream>

// incase there's already a built in class with this name
// create my own namespace
namespace Izy
{

	class Point
	{
	private:

		float x, y;

	public:

		//Point() { x = 0; y = 0; }; //traditional

		Point() : x{0}, y{0} {} // "new", a bit faster than traditional
		Point(float x_val, float y_val) : x{x_val}, y{y_val} {}

		void Write(std::ostream& ostream);
		friend std::ostream& operator << (std::ostream& ostream, Point pt);

		// manual implementation
		void Add(Point& point);

		Point& operator + (Point& pt2);

		Point operator * (float mlt);


	};

}