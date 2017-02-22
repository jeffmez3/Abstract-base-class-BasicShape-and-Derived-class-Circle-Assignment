#include <iostream>
#include "Basic Shape.h"
#include "Circle.h"
#include <string>
#include<vector>
using namespace std;
void poly(const basicShape * const);

int main()
{ 
	Circle circle("Round",0.0,10.0);
	vector< basicShape * > shapes(1);
	shapes[0] = &circle;
	for (const basicShape *basicshapePtr : shapes)
		poly(basicshapePtr);
}
void poly(const basicShape * const baseClassPtr)
{
	baseClassPtr->print();
	cout << baseClassPtr->calcArea() << endl;
	cout << baseClassPtr->getname() << endl;
}
		
	
	
