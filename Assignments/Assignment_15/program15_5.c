/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 // 
// Funtion Name:Percentage                                                                                                                                         //
// Descrition:program which accept total marks & obtained marks from user and calculate percentage                                                                 //
// Input:integer,float                                                                                                                                           // 
// Output:float                                                                                                                                                  //
// Author:Pranav shankar ligade                                                                                                                                    //
// Date:03/11/2026                                                                                                                                                 //
//                                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

float Percentage(int itot,int iobt)
{
    float fper=0;
    
    if(itot == 0)
    {
        return 0.0f;
    }

    return ((float)iobt / itot) * 100;

}
int main()
{
    int ivalue1=0,ivalue2=0;
    float fret=0.0f;

    printf("please enter total marks\n");
    scanf("%d",&ivalue1);

    printf("please enter obtained marks\n");
    scanf("%d",&ivalue2);

    fret=Percentage(ivalue1,ivalue2);

    printf("your percentage is:%f",fret);

    return EXIT_SUCCESS;
}