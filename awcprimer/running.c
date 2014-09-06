#include <stdio.h>
const int S_PER_M = 60; //seconds in a minute
const int S_PER_H = 3600; //second in a hour
const double M_PER_KM = 0.62137;  //miles in a kilometer

int main(void)
{
    double distance_km, distance_miles;
    double rate;
    int min, sec;
    int time;
    double time_for_mile;
    int milem, sec_for_mile;
    printf("convert all in metric range\n");
    printf("Enter how many km want to run\n");
    scanf("%lf", &distance_km); //%lf is for double type
    printf("Enter the time now...\n");
    printf("Minutes first\n");
    scanf("%d", &min);
    printf("Now seconds...\n");
    scanf("%d", &sec);
    printf("And now...\n");
    time = S_PER_M * min + sec; //all in seconds
    distance_miles = M_PER_KM * distance_km; //miles
    rate  = distance_miles / time * S_PER_H;
    milem = (double) time / distance_miles;
    sec_for_mile = (int) milem / S_PER_M;

}