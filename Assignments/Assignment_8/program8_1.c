/////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                             // 
// Funtion Name:Number                                                                         //
// Descrition:Accept 1:number less than 50 then print small                                    //
//                   2:number greater than 50 and less then 100 print medium                   //
//                   3:number greater than 100 then print large                                //
// Input:Integer,Integer                                                                       // 
// Output:Integer                                                                              //
// Author:Pranav shankar ligade                                                                //
// Date:30/10/2026                                                                             //
//                                                                                             //
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void Number(int ino)
{
    if(ino<50)
    {
        printf("small");
    }

    else if(ino>50 && ino<100)
    {
        printf("medium");
    }
    if(ino>100)
    {
        printf("large");
    }
}
int main()
{
    int ivalue=0;

    printf("enter number:\n");
    scanf("%d",&ivalue);

    Number(ivalue);

    return EXIT_SUCCESS;
}
