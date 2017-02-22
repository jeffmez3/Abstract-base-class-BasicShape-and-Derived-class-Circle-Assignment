#ifndef CIRCLE_H
#define CIRCLE_H
#include <string>
#include "Basic Shape.h"
using namespace std;
class Circle : public basicShape
{
public:
	Circle(const string  n, double  a, double  r);
	virtual double calcArea() const override;
		virtual void print() const override;
private:
	double radius;
};
#endif
