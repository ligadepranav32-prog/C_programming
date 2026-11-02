//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                          // 
// Funtion Name:SquareMeter                                                                                                                 //
// Descrition:program which which accept area in square feet and convert into square meter(1 square feet=0.0929 square meter)               //
// Input:integer,double                                                                                                                     // 
// Output:double                                                                                                                            //
// Author:Pranav shankar ligade                                                                                                             //
// Date:30/10/2026                                                                                                                          //
//                                                                                                                                          //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
double SquareMetre(int ivalue)
{
    double dSquareMeter = 0.0;

    dSquareMeter =ivalue  * 0.092903;

    return dSquareMeter;
}


int main()
{
    int ivalue=0;
    double dret=0;
   

    printf("enter area of square feet :\n");
    scanf("%d",&ivalue);

    dret=SquareMetre(ivalue);

    printf("area of square meter is:%lf",dret);
    
    return EXIT_SUCCESS;
}