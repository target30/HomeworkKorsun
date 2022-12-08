#pragma once
#include<stdio.h>
struct Vector_2D
{
    double x,y;
};

struct Vector_2D create_zero_vector()
{
    struct Vector_2D vect;
    vect.x=0;
    vect.y=0;
    return vect;
}

struct Vector_2D create_vector(double _x, double _y)
{
    struct Vector_2D vect;
    vect.x=_x;
    vect.y=_y;
    return vect;
}

struct Vector_2D deduction_vectors(struct Vector_2D vect1, struct Vector_2D vect2)
{
    struct Vector_2D vect;
    vect.x=vect1.x-vect2.x;
    vect.y=vect1.y-vect2.y;
    return vect;
}

struct Vector_2D add_vectors(struct Vector_2D vect1, struct Vector_2D vect2)
{
    struct Vector_2D vect;
    vect.x=vect1.x+vect2.x;
    vect.y=vect1.y+vect2.y;
    return vect;
}

struct Vector_2D add_const_to_vect(struct Vector_2D vect1, double a)
{
    struct Vector_2D vect;
    vect.x=vect1.x+a;
    vect.y=vect1.y+a;
    return vect;
}

struct Vector_2D deduction_const_from_vector(struct Vector_2D vect1, double a)
{
    struct Vector_2D vect;
    vect.x=vect1.x-a;
    vect.y=vect1.y-a;
    return vect;
}

struct Vector_2D multiply_vector_on_const(struct Vector_2D vect1, double a)
{
    struct Vector_2D vect;
    vect.x=vect1.x*a;
    vect.y=vect1.y*a;
    return vect;
}

struct Vector_2D divide_vector_on_const(struct Vector_2D vect1, double a)
{
    struct Vector_2D vect;
    vect.x=vect1.x/a;
    vect.y=vect1.y/a;
    return vect;
}

double scalar_multiplication(struct Vector_2D vect1, struct Vector_2D vect2)
{
    return vect1.x*vect2.x+vect1.y*vect2.y;
}

void print_vector(struct Vector_2D vect)
{
    printf("(%lf,%lf)\n", vect.x, vect.y);
}