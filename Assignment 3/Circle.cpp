#include <iostream>
#include "Circle.h"
#include<string>
using namespace std;

Circle::Circle(string n, double a,  double r)
	:basicShape(n,a)
{
	radius = r;
	calcArea();
}
double Circle::calcArea() const 
{
	double area;
	area = 3.14159*radius*radius;
	return area;
}
void Circle::print() const
{
	cout << "radius:" << radius<<endl;
	basicShape::print();
	basicShape::getname();
}

