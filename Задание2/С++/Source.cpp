#include "Vector.h"
int main()
{
	Vector_2D vect1= Vector_2D(2,1);
	Vector_2D vect2= Vector_2D(1,2);
	Vector_2D vect3 = vect2/2;
	std::cout << vect1*vect2<< std::endl;
	std::cout << vect3 << std::endl;
	vect3 = vect3 * 3;
	std::cout << vect3 << std::endl;
	vect3 = vect3 - vect1;
	std::cout << vect3;
	return 0;
}
