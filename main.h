#ifndef MAIN_H
#define MAIN_H

/*include libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*my prototypes*/

/*arithmetic operations start here*/
float add(float a, float b);
float sub(float a, float b);
float mult(float a, float b);
float divi(float a, float b);
float mod(int a, int b);
/*arithmetic operations end here*/

/*unit conversion starts here*/
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
/*============MASS===========*/
float g_to_kg(float m);
float kg_to_g(float m);
float kg_to_t(float m);
float t_to_kg(float m);
float g_to_t(float m);
float t_to_g(float m);
/*============SPEED==========*/
float ms_to_kmhr(float s);
float kmhr_to_ms(float s);
float kmhr_to_mileshr(float s);
float mileshr_to_kmhr(float s);
float ms_to_mileshr(float s);
float mileshr_to_ms(float s);
/*===========TIME============*/
float hr_to_min(float t);
float min_to_hr(float t);
float hr_to_sec(float t);
float sec_to_hr(float t);
float min_to_sec(float t);
float sec_to_min(float t);
/*unit conversion ends here*/


/*bit manipulation starts here*/
void dec_to_bin(int d);
/*bit manipulation ends here*/

/*others start here*/
float square(float s);
float squareroot(float sr);
float cube(float c);
float cuberoot(float cr);
int sum_of_even(int e);
int sum_of_odd(int o);
int factorial_of_num(int f);
/*others end here*/

#endif