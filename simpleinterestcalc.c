//C program to implement
//simple interest calculator

#include<stdio.h>
#include<stdlib.h>

//Driver Code
int main()
{


double p, t, r;
    printf("input values for P T R");
    scanf("%lf %lf %lf"
    , &p, &t, &r);

    //Calculate simple interest
    double SI = ((p* t * r) /100);

    //Print Simple Interest
    printf("Simple Interest = %f\n", SI);


    return 0;
}