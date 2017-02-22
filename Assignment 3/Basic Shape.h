#ifndef BASICSHAPE_H
#define BASICSHAPE_H
#include <string>
class basicShape
{
public:
	basicShape(const std::string , double );
	double getArea() const;
		virtual double calcArea() const = 0;
		virtual void print()const;
		std::string getname()const;
protected:
	const double area;
private:
	const std::string name;
};

#endif