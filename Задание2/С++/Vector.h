#pragma once
#include <iostream>
class Vector_2D
{
private:
	double x, y;
public:
	double getX();
	double getY();
	Vector_2D();
	Vector_2D(const double& _x,const double& y);
	Vector_2D(const Vector_2D& vector);
	double operator* (Vector_2D& vect);
	Vector_2D operator+ (Vector_2D& vect);
	Vector_2D operator- (Vector_2D& vect);
	Vector_2D operator* (const double & a);
	Vector_2D operator/ (const double& a);
	Vector_2D operator+ (const double& a);

protected:
};
double Vector_2D::getX()
{
	return x;
}

Vector_2D::Vector_2D()
{
	x = 0;
	y = 0;
}

double Vector_2D::getY()
{
	return y;
}

Vector_2D::Vector_2D(const Vector_2D& vector)
{
	x = vector.x;
	y = vector.y;
}

Vector_2D::Vector_2D(const double& _x, const double& _y)
{
	x = _x;
	y = _y;
}

double Vector_2D::operator* (Vector_2D& vect)
{
	return(this->getX() * vect.getX() + this->getY() * vect.getY());
}

Vector_2D Vector_2D::operator+ (Vector_2D& vect)
{
	return(Vector_2D(vect.getX() + this->getX(), vect.getY() + this->getY()));
}

Vector_2D Vector_2D::operator- (Vector_2D& vect)
{
	return(Vector_2D( this->getX()-vect.getX(),  this->getY()-vect.getY()));
}

Vector_2D Vector_2D::operator* (const double& a)
{
	return(Vector_2D(a * this->getX(), a * this->getY()));
}

Vector_2D Vector_2D::operator/ (const double& a)
{
	return(Vector_2D(this->getX()/a, this->getY()/a));
}
Vector_2D operator* (const double& a, Vector_2D& vect)
{
	return(Vector_2D(a * vect.getX(), a * vect.getY()));
}

Vector_2D Vector_2D::operator+ (const double& a)
{
	return(Vector_2D(this->getX()+a , this->getY()+a));
}

Vector_2D operator+ (const double& a,Vector_2D& vect)
{
	return(Vector_2D(vect.getX() + a, vect.getY() + a));
}

std::ostream& operator<<(std::ostream& os,Vector_2D& vect) {
	return os << '(' << vect.getX() << ',' << vect.getY()
		<< ')';
}