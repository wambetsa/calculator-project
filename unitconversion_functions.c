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
float g_to_kg(float m)
{
    float result;

    result = m / 1000;
    return result;
}

/*kg to g*/
float kg_to_g(float m)
{
    float result;

    result = m * 1000;
    return result;
}

/*kg to t*/
float kg_to_t(float m)
{
    float result;

    result = m / 1000;
    return result;
}

/*t to kg*/
float t_to_kg(float m)
{
    float result;

    result = m * 1000;
    return result;
}

/*g to t*/
float g_to_t(float m)
{
    float result;

    result = m / 1000000;
    return result;
}

/*t to g*/
float t_to_g(float m)
{
    float result;

    result = m * 1000000;
    return result;
}

/*=============================*/
/*============SPEED============*/
/*m/s to km/hr*/
float ms_to_kmhr(float s)
{
    float result;

    result = s * 3.6;
    return result;
}

/*km/hr to m/s*/
float kmhr_to_ms(float s)
{
    float result;

    result = s / 3.6;
    return result;
}

/*km/hr to miles/hr*/
float kmhr_to_mileshr(float s)
{
    float result;

    result = s / 1.609;
    return result;
}

/*miles/hr to km/hr*/
float mileshr_to_kmhr(float s)
{
    float result;

    result = s * 1.60934;
    return result;
}

/*m/s to miles/hr*/
float ms_to_mileshr(float s)
{
    float result;

    result = s * 2.237;
    return result;
}

/*miles/hr to m/s*/
float mileshr_to_ms(float s)
{
    float result;

    result = s / 2.237;
    return result;
}


/*============================*/
/*============TIME============*/
/*hrs to min*/
float hr_to_min(float t)
{
    float result;

    result = (t * ((float) 60));
    return result;
}

/*min to hrs*/
float min_to_hr(float t)
{
    float result;

    result = t / (float)60;
    return result;
}

/*hrs to sec*/
float hr_to_sec(float t)
{
    float result;

    result = (t * ((float) 3600));
    return result;
}

/*sec to hrs*/
float sec_to_hr(float t)
{
    float result;

    result = (t / ((float) 3600));
    return result;
}

/*min to sec*/
float min_to_sec(float t)
{
    float result;

    result = (t * ((float)60));
    return result;
}

/*sec to min*/
float sec_to_min(float t)
{
    float result;

    result = (t / ((float)60));
    return result;
}