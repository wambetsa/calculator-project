#include "main.h"

/*addition*/
float add(float a, float b)
{
    float result = a + b;
    return result;
}

/*subtraction*/
float sub(float a, float b)
{
    float result = a - b;
    return result;
}

/*mu;tiplication*/
float mult(float a, float b)
{
    float result = a * b;
    return result;
}

/*division*/
float divi(float a, float b)
{
    float result;
    /*set result to 0 if b is equal to 0
    if (b == 0){result = 0;}*/

    /*divide if b is not 0 or set result to 0*/
    if (b != 0)
    {
        result = a / b; 
    }
    else
    {
        result = 0;
    }

    return result;
}

/*modulus or remainder*/
float mod(int a, int b)
{
    float result = a % b;
    return result;
}