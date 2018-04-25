#include "stdafx.h"
#include <iostream> 

using namespace std;

class Circle
{
	double radius;
	double pi = 3.14159;

public:

	double area, diameter, circumference;

	Circle(double rad = 0.0)
	{
		setRadius(rad);
	}

	void setRadius(double r)
	{
		radius = r;
	}

	double getRadius()
	{
		return radius;
	}

	double getArea()
	{
		return area = pi * radius * radius;
	}

	double getDiameter()
	{
		return diameter = radius * 2;
	}

	double getCircumference()
	{
		return circumference = 2 * pi * radius;
	}

};



int main()
{
	double radius1;

	cout << "Please enter the radius of the circle: " << endl;
	cin >> radius1;

	Circle circle1(radius1);

	cout << "Area of the circle: " << circle1.getArea() << endl;
	cout << "Diameter of the circle: " << circle1.getDiameter() << endl;
	cout << "Circumference of the circle: " << circle1.getCircumference() << endl;

	return 0;
}