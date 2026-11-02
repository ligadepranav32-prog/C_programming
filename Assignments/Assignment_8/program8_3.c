/////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                             // 
// Funtion Name:factorial                                                                      //
// Descrition:program to find factorial of given number                                        //
// Input:Integer,Integer                                                                       // 
// Output:Integer                                                                              //
// Author:Pranav shankar ligade                                                                //
// Date:30/10/2026                                                                             //
//                                                                                             //
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
int Factorial(int ino)
{
    int icnt=0;
    int ifact=1;

    if(ino<0)
    {
        ino=-ino;
    }

    for(icnt=1;icnt<=ino;icnt++)
    {
    
        ifact=ifact*icnt;
    }

    return ifact;

}
int main()
{
    int ivalue=0,iret=0;

    printf("enter number:\n");
    scanf("%d",&ivalue);

    iret=Factorial(ivalue);

    printf("Factorial of number is %d",iret);
    

    return EXIT_SUCCESS;
}