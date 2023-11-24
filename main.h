#ifndef MAIN_H
#define MAIN_H

/*include libraries*/
#include <stdio.h>
#include <stdlib.h>

/*my prototypes*/
/*arithmetic operations*/
float add(float a, float b);
float sub(float a, float b);
float mult(float a, float b);
float divi(float a, float b);
float mod(int a, int b);
/*unit conversion*/
/*==========length===========*/
float cm_to_m(float distance);
float m_to_cm(float distance);
float m_to_km(float distance);
float km_to_m(float distance);
float km_to_miles(float distance);
float miles_to_km(float distance);
/*========temperature========*/
float deg_to_far(float temp);
float deg_to_kel(float temp);
float far_to_deg(float temp);
float far_to_kel(float temp);
float kel_to_deg(float temp);
float kel_to_far(float temp);
/*===========volume==========*/
float ltr_to_mcub(float vol);
float mcub_to_ltr(float vol);
float ltr_to_fcub(float vol);
float fcub_to_ltr(float vol);

/*bit manipulation*/

/*others*/

#endif