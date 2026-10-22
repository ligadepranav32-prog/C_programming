/////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                             // 
// Funtion Name:CheckLeapYear                                                                  //
// Descrition:It use to perform check leap year                                                //
// Input:Intergr,Interger                                                                      // 
// Output:Interger                                                                             //
// Author:Pranav shankar ligade                                                                //
// Date:22/10/2026                                                                             //
//                                                                                             //
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void checkLeapYear(int iyear)
{
    
    if(iyear%400==0||(iyear%4==0&&iyear%100!=0))
    {
        printf("%d is leap year:\n",iyear);
    }

    else
    {
        printf("%d is not leap year:\n",iyear);
    }
}
int main()
{
    int iyear=0;

    printf("enter a year:\n");
    scanf("%d",&iyear);

    checkLeapYear(iyear);

    return EXIT_SUCCESS;
}