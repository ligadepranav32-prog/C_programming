//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                          // 
// Funtion Name:CircleArea                                                                                                                  //
// Descrition:program which accept radiuds of circle from user and calculation its area(Area=PI*radius*radius)                              //
// Input:float,double                                                                                                                       // 
// Output:float                                                                                                                             //
// Author:Pranav shankar ligade                                                                                                             //
// Date:30/10/2026                                                                                                                          //
//                                                                                                                                          //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
double CircleArea(float fRadius)
{
    float PI=3.14f;
    float Area=0.0f;

    Area=PI*fRadius*fRadius;

    return Area;

}
int main()
{
    float fvalue=0.0f;
    double dret=0.0;

    printf("enter radius:\n");
    scanf("%f",&fvalue);

    dret=CircleArea(fvalue);

    printf("area of circle is:%lf",dret);
    return EXIT_SUCCESS;
}