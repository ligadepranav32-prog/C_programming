/////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                         // 
// Funtion Name:AcceptNumerDisplayPrintFirstNumberInSecondNumberOfTime                     //
// Descrition:It use to perform accept numer print first number in secondn number of time  //
// Input:Integer,Integer                                                                   // 
// Output:Integer                                                                          //
// Author:Pranav shankar ligade                                                            //
// Date:22/10/2026                                                                         //
//                                                                                         //
////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void display(int ino,int ifrequency)
{
    int icnt=0;
    
    for(icnt=1;icnt<=ifrequency;icnt++)
    {
        printf("%d ",+ino);
    }
}
int main()
{
    int ivalue=0;
    int icount=0;

    printf("enter number you want to display\n");
    scanf("%d",&ivalue);

    printf("enter frequency did you want to display it\n");
    scanf("%d",&icount);

    display(ivalue,icount);
    
    return EXIT_SUCCESS;
}