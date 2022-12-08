#include "Vector_2D_C.h"

int main()
{
    struct Vector_2D vec=create_vector(1,1);
    print_vector(vec);
    struct Vector_2D vec1=multiply_vector_on_const(vec, 3);
    print_vector(vec1);
    struct Vector_2D vec2=add_vectors(vec1,vec);
    print_vector(vec2);
	return 0;
}
