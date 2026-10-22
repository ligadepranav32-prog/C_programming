//////////////////////////////////////////////////////////////////////////////////
//                                                                              // 
// Funtion Name:AcceptOneNumerPrintThatNumberOfEvenFactors                      //
// Descrition:It use to perform Accept one number print even factors number     //
// Input:Integer,Integer                                                       // 
// Output:Integer                                                               //
// Author:Pranav shankar ligade                                                 //
// Date:22/10/2026                                                              //
//                                                                              //
//////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void displayFactor(int ino)
{
    int i=1;

    if(ino<0)
    {
        ino=-ino;
    }
    for(i=1;i<=ino;i++)
    {
        if ((ino%i==0) && (i%2==0))
        {
            printf("%d ",i);
        }
    }
}
int main()
{
    int ivalue=0;

    printf("enter number:\n");
    scanf("%d",&ivalue);
    displayFactor(ivalue);

    return EXIT_SUCCESS;
}