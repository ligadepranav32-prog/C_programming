/////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                             // 
// Funtion Name:AcceptOneNumerPrintThatNumberOfEvenNumbersOnScreen                             //
// Descrition:It use to perform Accept one numer print that number of even numbers on screen   //
// Input:Integer,Integer                                                                      // 
// Output:Integer                                                                              //
// Author:Pranav shankar ligade                                                                //
// Date:22/10/2026                                                                            //
//                                                                                            //
///////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void PrintEven(int ino)
{
    int i=1;
    int icount=0;
    while(icount<ino)
    {
        if(i%2==0)
        {
        printf("%d ",i);
        icount++;
        }
        else
        {
        
        }

        i++;
    }
}
int main()
{
    int ivalue=0;
    
    printf("enter number:\n");
    scanf("%d",&ivalue);

    PrintEven(ivalue);

    return EXIT_SUCCESS;
}