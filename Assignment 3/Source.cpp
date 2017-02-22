#include <iostream>
#include"Basic Shape.h"
#include <string>
using namespace std;
basicShape::basicShape(const string n, double a)
	: area(a), name(n)
{

}
void basicShape::print() const 
{
	cout << "The area is: " << area<<endl;
}

 string basicShape::getname() const
{
	return name;
}