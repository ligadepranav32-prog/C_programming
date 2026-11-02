//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                          // 
// Funtion Name:CircleArea                                                                                                                  //
// Descrition:program which accept width and height of rectangle from user and calculation its area(Area=width*height)                      //
// Input:float,double                                                                                                                       // 
// Output:float                                                                                                                             //
// Author:Pranav shankar ligade                                                                                                             //
// Date:30/10/2026                                                                                                                          //
//                                                                                                                                          //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
double RectArea(float fwidth,float fheight)
{
    
    float Area=0.0f;

    Area=fwidth*fheight;

    return Area;

}
int main()
{
    float fvalue1=0.0f,fvalue2=0.0f;
    double dret=0.0;

    printf("enter width:\n");
    scanf("%f",&fvalue1);

    printf("enter height:\n");
    scanf("%f",&fvalue2);


    dret=RectArea(fvalue1,fvalue2);

    printf("area of rectangle is:%lf",dret);
    
    return EXIT_SUCCESS;
}