#include<stdio.h>
int main()
{
    double time, distance, speed;

    printf("Enter Your distance: ");
    scanf("%f", &distance);
    printf("Enter Your speed: ");
    scanf("%f", &speed);

    time=distance/speed;
    printf("time is %f ",time);

}
