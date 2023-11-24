#include "main.h"

/*entry point of the program*/
int main()
{
    int entry;

    float i, j, res_add, res_sub, res_div, res_mult, res_mod;

    printf("Welcome to Jewstechs Calculator.\n");
    while(1)
    {
        printf("\nWhich Operation do you want to do?\n");
        printf("Select \n 1 : For basic operations \n 2 : For BitManipulation. \n 3 : For Unit Conversion\n 4 : For Others\n 0 : Exit/Quit\n : ");
        scanf("%d", &entry);

        switch(entry)
        {
            /*Arithmetic Operations*/
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
            
            /*bit manipulation*/
            case 2:
                printf("Bit Manipulation\n");
                break;
            
            /*Unit Conversion*/
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
                    {}
                    else if (units == 5)
                    {}
                    else if (units == 6)
                    {}
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
            
            /*Others such as squares and roots*/
            case 4:
                printf("Others eg square and roots\n");
                break;

            case 0:
                printf("Exiting...\n");
                exit(EXIT_SUCCESS);
                break;
            
            /*default: selection out of entry*/
            default:
                printf("Invalid Selection\n");
                printf("Enter a number between 1 and 4 or 0 to quit\n");
        }
    }
    return 0;
}