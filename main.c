#include "main.h"

/*entry point of the program*/
int main()
{
    int entry;
    int counter = 0; /*exits default when user defaults 4 times*/

    float i, j, res_add, res_sub, res_div, res_mult, res_mod;

    printf("Welcome to Jewstechs Calculator.\n");
    while(1)
    {
        printf("\nWhich Operation do you want to do?\n");
        printf("Select \n 1 : For basic operations \n 2 : For BitManipulation. \n 3 : For Unit Conversion\n 4 : For Others\n 0 : Exit/Quit\n : ");
        scanf("%d", &entry);

        switch(entry)
        {
            /*================================*/
            /*Arithmetic Operations start here*/
            case 1:
                printf("Enter Num1 : ");
                scanf("%f", &i);
                printf("\n");
                printf("Enter Num2 : ");
                scanf("%f", &j);
                printf("\n");

                res_add = add(i, j);
                res_sub = sub(i, j);
                res_div = divi(i, j);
                res_mult = mult(i, j);
                res_mod = mod((int) i, (int) j);

                /*output results*/
                printf("Addition : %f\n", res_add);
                printf("Subtraction : %f\n", res_sub);
                printf("Multiplication : %f\n", res_mult);
                printf("Division : %f\n", res_div);
                printf("Modulo : %f\n", res_mod);
                break;
            /*Arithmetic Operations end here*/
            /*==============================*/

            /*============================*/
            /*bit manipulation starts here*/
            case 2:
                printf("Bit Manipulation\n");
                break;
            /*bit manipulation ends here*/
            /*==========================*/
            
            /*===========================*/
            /*Unit Conversion starts here*/
            case 3:
                printf("Unit Conversion\n");
                /*while true loop*/
                while(1){
                    printf("\nChoose the unit to convert\n");
                    int units;
                
                    printf(" 1 : Length\n 2 : Temperature\n 3 : Volume\n 4 : Mass\n 5 : Speed\n 6 : Time\n 0 : Enter 0 to quit\n");
                    scanf("%d", &units);

                    if (units == 1)
                    {
                        float length;
                        printf("Enter distance : ");
                        scanf("%f", &length);

                        float cmm, mcm, mkm, kmm, kmmiles, mileskm;
                        cmm = cm_to_m(length);
                        mcm = m_to_cm(cmm);
                        mkm = m_to_km(cmm);
                        kmm = km_to_m(mkm);
                        kmmiles = km_to_miles(mkm);
                        mileskm = miles_to_km(kmmiles);

                        printf("\n%f cm = %f m\n", length, cmm);
                        printf("%f m = %f cm\n", cmm, mcm);
                        printf("%f m = %f km\n", cmm, mkm);
                        printf("%f km = %f m\n", mkm, kmm);
                        printf("%f km = %f miles\n", mkm, kmmiles);
                        printf("%f miles = %f km\n", kmmiles, mileskm);
                    
                    }
                    else if (units == 2)
                    {
                        float temp;

                        printf("Enter temp in Degrees Celcius : \n");
                        scanf("%f", &temp);

                        float dtf, dtk, ftd, ftk, ktd, ktf;
                        
                        dtf = deg_to_far(temp);
                        dtk = deg_to_kel(temp);
                        ftd = far_to_deg(dtf);
                        ftk = far_to_kel(dtf);
                        ktd = kel_to_deg(ftk);
                        ktf = kel_to_far(ftk);

                        printf("%f Degrees = %f FH\n", temp, dtf);
                        printf("%f Degrees = %f K\n", temp, dtk);
                        printf("%f FH = %f Degrees Celcius\n", dtf, ftd);
                        printf("%f FH = %f K\n", dtf, ftk);
                        printf("%f K = %f Degrees Celcius\n", dtk, ktd);
                        printf("%f K = %f FH\n", dtk, ktf);
                    }
                    else if (units == 3)
                    {
                        float user_vol;

                        printf("\nEnter volume in liters : \n");
                        scanf("%f", &user_vol);

                        float ltm, mtl, ltf, ftl;

                        ltm = ltr_to_mcub(user_vol);
                        mtl = mcub_to_ltr(ltm);
                        ltf = ltr_to_fcub(mtl);
                        ftl = fcub_to_ltr(ltf);

                        printf("%f ltr = %f meters cub\n", user_vol, ltm);
                        printf("%f meter cub = %f ltr\n", ltm, mtl);
                        printf("%f ltr = %f foot cub\n", mtl, ltf);
                        printf("%f foot cub = %f ltr\n", ltf, ftl);
                    }
                    else if (units == 4)
                    {
                        float user_mass;

                        printf("\nEnter Mass in grams : \n");
                        scanf("%f", &user_mass);

                        float gtkg, kgtg, kgtt, ttkg, gtt, ttg;
                        
                        gtkg = g_to_kg(user_mass);
                        kgtg = kg_to_g(gtkg);
                        kgtt = kg_to_t(gtkg);
                        ttkg = t_to_kg(kgtt);
                        gtt = g_to_t(kgtg);
                        ttg = t_to_g(gtt);

                        printf("%f g = %f kg\n", user_mass, gtkg);
                        printf("%f kg = %f g\n", gtkg, kgtg);
                        printf("%f kg = %f t\n", gtkg, kgtt);
                        printf("%f t = %f kg\n", kgtt, ttkg);
                        printf("%f g = %f t\n", kgtg, gtt);
                        printf("%f t = %f g\n", gtt, ttg);
                    }
                    else if (units == 5)
                    {
                        float user_speed;

                        printf("\nEnter speed in m/s : \n");
                        scanf("%f", &user_speed);

                        float mstkmhr, kmhrtms, kmhrtmileshr, mileshrtkmhr, mstmileshr, mileshrtms;
                        
                        mstkmhr = ms_to_kmhr(user_speed);
                        kmhrtms = kmhr_to_ms(mstkmhr);
                        kmhrtmileshr = km_to_miles(mstkmhr);
                        mileshrtkmhr = mileshr_to_kmhr(kmhrtmileshr);
                        mstmileshr = ms_to_mileshr(kmhrtms);
                        mileshrtms = mileshr_to_ms(kmhrtmileshr);

                        printf("%f m/s = %f km/hr\n", user_speed, mstkmhr);
                        printf("%f km/hr = %f m/s\n", mstkmhr, kmhrtms);
                        printf("%f km/hr = %f miles/hr\n", mstkmhr, kmhrtmileshr);
                        printf("%f miles/hr = %f km/hr\n", kmhrtmileshr, mileshrtkmhr);
                        printf("%f m/s = %f miles/hr\n", kmhrtms, mstmileshr);
                        printf("%f miles/hr = %f m/s\n", mstmileshr, mileshrtms);
                    }
                    else if (units == 6)
                    {
                        float user_time;

                        printf("\nEnter time in seconds : \n");
                        scanf("%f", &user_time);

                        float sectmin, mintsec, minthr, hrtmin, secthr, hrtsec;

                        sectmin = sec_to_min(user_time);
                        mintsec = min_to_sec(sectmin);
                        minthr = min_to_hr(sectmin);
                        hrtmin = hr_to_min(minthr);
                        secthr = sec_to_hr(mintsec);
                        hrtsec = hr_to_sec(secthr);

                        printf("%f sec = %f min\n", user_time, sectmin);
                        printf("%f min = %f sec\n", sectmin, mintsec);
                        printf("%f min = %f hr\n", sectmin, minthr);
                        printf("%f hr = %f min\n", minthr, hrtmin);
                        printf("%f sec = %f hr\n", mintsec, secthr);
                        printf("%f hr = %f sec\n", secthr, hrtsec);
                    }
                    else if (units == 0)
                    {
                        printf("Quiting...\n");
                        break;
                    }
                    else
                    {
                        printf("Invalid choice!\n");
                        printf("Please select a number between 1 and 6 or 0\n");
                    }
                }
                break;
            /*Unit conversion ends here*/
            /*=========================*/

            /*=================================================*/
            /*Others such as squares, roots and even start here*/
            case 4:
                printf("Others eg squares, roots, odd, even, factorial\n");
                while (1)
                {
                    int others;

                    printf("Select category\n 1 : Square\n 2 : Squareroot\n 3 : Cube\n 4 : Cuberoot\n 5 : Even\n 6 : Odd\n 7 : Factorial\n 0 : Exit/Quit\n");
                    scanf("%d", &others);
                    if (others == 1)
                    {
                        float user_sq, result;

                        printf("Enter number to square : ");
                        scanf("%f", &user_sq);

                        result = square(user_sq);
                        printf("Square of %f is %f\n", user_sq, result);
                    }
                    else if (others == 2)
                    {
                        float user_sr, result;

                        printf("Enter the number to find squareroot : ");
                        scanf("%f", &user_sr);

                        result = squareroot(user_sr);
                        printf("Squareroot of %f is %f\n", user_sr, result);
                    }
                    else if (others == 3)
                    {
                        float user_cb, result;

                        printf("Enter number to cube : ");
                        scanf("%f", &user_cb);
                        
                        result = cube(user_cb);
                        printf("Cube of %f is %f\n", user_cb, result);
                    }
                    else if (others == 4)
                    {
                        float user_cr, result;

                        printf("Enter number to find cuberoot : ");
                        scanf("%f", &user_cr);

                        result = cuberoot(user_cr);
                        printf("Cuberoot of %f is %f\n", user_cr, result);
                    }
                    else if (others == 5)
                    {
                        int res, user_num_range;

                        printf("Enter number n : ");
                        scanf("%d", &user_num_range);

                        res = sum_of_even(user_num_range);
                        printf("\nSum of even numbers between 0 and %d is : %d\n", user_num_range, res);
                    }
                    else if (others == 6)
                    {
                        int user_nm, res;

                        printf("Enter number : ");
                        scanf("%d", &user_nm);

                        res = sum_of_odd(user_nm);
                        printf("\nSum of odd numbers btn 0 and %d is : %d\n", user_nm, res);
                    }
                    else if (others == 7)
                    {
                        int fact, user_num;

                        printf("Enter number eg 5 : ");
                        scanf("%d", &user_num);

                        fact = factorial_of_num(user_num);
                        printf("Factorial of %d is : %d \n", user_num, fact);
                    }
                    else if (others == 0)
                    {
                        printf("Quiting....\n");
                        break;
                    }
                    else
                    {
                        printf("Invalid CHoice\n");
                        printf("Please select a number between 1 and 6 or 0 to Exit\n");
                    }
                }
                break;        

            /*other such as squares, roots, even end here*/
            /*===========================================*/


            /*================*/
            /*exit starts here*/
            case 0:
                printf("Exiting...\n");
                exit(EXIT_SUCCESS);
                break;
            /*exit ends here*/
            /*==============*/


            /*===========================================*/
            /*default: selection out of entry starts here*/
            default:
                counter++;

                printf("Invalid Selection\n");
                printf("Enter a number between 1 and 4 or 0 to quit\n");

                /*Quit when user makes "Invalid Selection" more than thrice*/
                if (counter == 4)
                {
                    printf("\nYou have made Invalid selection more than 3 times\n");
                    printf(":::::Try again later!:::::\n:::::Quiting...::::::\n\n");
                    exit(EXIT_SUCCESS);
                }
            /*default: selection out of entry ends here*/
            /*=========================================*/
        }
    }
    return 0;
}