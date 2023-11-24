#include "main.h"

/*square of a number*/
float square(float s)
{
    return s * s;
}

/*squareroot of a number*/
float squareroot(float sr)
{
    if (sr < 0)
    {
        return -1.0;
    }
    return sqrt(sr);
}

/*cube of a number*/
float cube(float c)
{
    return ((c * c) * c);
}

/*cuberoot of a number*/
float cuberoot(float cr)
{
    return cbrt(cr);
}

/*even numbers*/
int sum_of_even(int e)
{
    if (e == 0)
    {
        return 0;
    }
    if (e % 2 == 0)
    {
        return e + (sum_of_even(e - 1));
    }
    else
    {
        return sum_of_even(e - 1);
    }
}

/*odd numbers*/
int sum_of_odd(int o)
{
    if (o == 0)
    {
        return 0;
    }
    if (o == 1)
    {
        return 1;
    }
    if (o % 2 != 0)
    {
        return o + (sum_of_odd(o - 1));
    }
    else
    {
        return sum_of_odd(o - 1);
    }
}

/*factorial of a number*/
int factorial_of_num(int f)
{
    int result;

    if ((f == 0) || (f == 1))
    {
        return 1;
    }
    result = (f * (factorial_of_num(f - 1)));
    
    return result;
}