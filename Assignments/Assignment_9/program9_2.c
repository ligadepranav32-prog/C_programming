///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                           // 
// Funtion Name:DollarToINR                                                                                  //
// Descrition:program which accept amount in us dollar and return its corresponding value in indian currency.//
// Input:Integer,Integer                                                                                     // 
// Output:Integer                                                                                            //
// Author:Pranav shankar ligade                                                                              //
// Date:30/10/2026                                                                                           //
//                                                                                                           //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
int DollartoINR(int ino)
{
    
    int iINR=0;

    iINR=ino*70;

    return iINR;
}
int main()
{
    int ivalue=0,iret=0;

    printf("enter number of USD :\n");
    scanf("%d",&ivalue);

    iret=DollartoINR(ivalue);

    printf("value in INR %d",iret);

    return EXIT_SUCCESS;
}