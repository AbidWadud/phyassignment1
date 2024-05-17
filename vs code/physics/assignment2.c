#include<stdio.h>
#include<math.h>
#define PI 3.1416
int main()
{
    int m1=3;
    double wavelength1=530*1e-9;
    double theta1=65*PI/180.0;
    double difference=(m1*wavelength1)/sin(theta1);
    int m2=2;
    double wavelength2=700*1e-9;
    double theta2 = asin(m2*wavelength2/difference);
    theta2=theta2*180/PI;
    printf("Angle of second order bright spot for red light is : %lf",theta2);
    return 0;
}
