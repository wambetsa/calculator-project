#include "main.h"

/*============*/
/*===LENGTH===*/
/*cm to metres*/
float cm_to_m(float distance)
{
    float result;

    if (distance > 0)
    {
        result = distance / 100;
    }
    return result;
}

/*metres to cm*/
float m_to_cm(float distance)
{
    float result;
    if (distance > 0)
    {
        result = distance * 100;
    }
    return result;
}

/*metres to km*/
float m_to_km(float distance)
{
    float result;

    if (distance > 0)
    {
        result = distance / 1000;
    }
    return result;
}

/*km to metres*/
float km_to_m(float distance)
{
    float result;

    if (distance > 0)
    {
        result = distance * 1000;
    }
    return result;
}

/*km to miles*/
float km_to_miles(float distance)
{
    float result;

    if (distance > 0)
    {
        result = distance / 1.609;
    }
    return result;
}

/*miles to km*/
float miles_to_km(float distance)
{
    float result;

    if (distance > 0)
    {
        result = distance * 1.609;
    }
    return result;
}

/*===========================*/
/*========TEMPERATURE========*/
/*temp - Degrees to Farenheit*/
float deg_to_far(float temp)
{
    float result;

    result = ((temp * ((float)9 / (float)5)) + (float)32);
    return result;
}

/*degrees to kelvin*/
float deg_to_kel(float temp)
{
    float result;

    result = (temp + 273.15);
    return result;
}

/*kelvin to degrees*/
float kel_to_deg(float temp)
{
    float result;

    result = temp - 273.15;
    return result;
}

/*Farenheit to degrees*/
float far_to_deg(float temp)
{
    float result;

    result = ((temp - (float)32) * ((float)5/ (float)9));
    return result;
}

/*kelvin to farenheit*/
float kel_to_far(float temp)
{
    float result;

    result = ((temp - 273.15) * ((float)9 / (float)5) + (float)32);
    return result;
}

/*farenheit to kelvin*/
float far_to_kel(float temp)
{
    float result;

    result = ((temp - (float)32) * ((float)5 / (float)9) + 273.15);
    return result;
}

/*============================*/
/*============VOLUME==========*/
/*liter to cubic meter*/
float ltr_to_mcub(float vol)
{
    float result;

    result = vol / 1000;
    return result;
}

/*cubic meter to leter*/
float mcub_to_ltr(float vol)
{
    float result;

    result = vol * 1000;
    return result;
}

/*liter to cubic foot*/
float ltr_to_fcub(float vol)
{
    float result;

    result = vol / 28.317;
    return result;
}

/*cubic foot to liter*/
float fcub_to_ltr(float vol)
{
    float result;

    result = vol * 28.317;
    return result;
}

/*============================*/
/*=============MASS===========*/
/*g to kg*/


/*kg to g*/


/*kg to t*/


/*t to kg*/


/*g to t*/


/*t to g*/

