#include<stdio.h>
#include<math.h>
#define PI 3.1416
int main()
{
    double theta,d;
    int order;
    printf("Etner difference between two slits(d) in micrometer : ");
    scanf("%lf",&d);
    double convert_d=d*1e-6;
    double d_nanometer=convert_d*1e+9;
    printf("Enter value of theta(in degrees): ");
    scanf("%lf",&theta);
    double theta_radiun=(theta*PI)/180;
    double angle=sin(theta_radiun);
    printf("Enter order : ");
    scanf("%d",&order);
    double wavelength=(convert_d*angle)/order;
    double new_wavelength=wavelength*1e+9;
    printf("Wavelength is : %.2f nm\n",new_wavelength);

    if(new_wavelength>d_nanometer)
    {
        printf("Unreasonable");
    }
 else
 {
     if(new_wavelength>=380 && new_wavelength<=750)
    {

        if(new_wavelength<=450)
        {
            printf("Violet");
        }
        else if(new_wavelength<=485)
        {
            printf("Blue");
        }

        else if(new_wavelength<=500 )
        {
            printf("Cyan");
        }
        else if(new_wavelength<=565 )
        {
            printf("Green");
        }
        else if(new_wavelength<=590 )
        {
            printf("Yellow");
        }
        else if( new_wavelength<=625 )
        {
            printf("Orange");
        }
        else if(new_wavelength<=750 )
        {
            printf("Red");
        }
    }
        else
        {
            printf("Invisible");
        }
 }


    return 0;
}
