///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                           // 
// Funtion Name:EvenFactorial                                                                                //
// Descrition:program to find even factorial of given number(input:5 output:8     (4*8))                     //
// Input:Integer,Integer                                                                                     // 
// Output:Integer                                                                                            //
// Author:Pranav shankar ligade                                                                              //
// Date:30/10/2026                                                                                           //
//                                                                                                           //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
int EvenFactorial(int ino)
{
    int icnt=0;
    int iresult=1;

    if(ino<0)
    {
        ino=-ino;
    }

    for(icnt=1;icnt<=ino;icnt++)
    {
        if(icnt % 2 == 0)
        {
            iresult=iresult*icnt;
        }

        
    }
    return iresult;

}
int main()
{
    int ivalue=0,iret=0;

    printf("enter number:\n");
    scanf("%d",&ivalue);

    iret=EvenFactorial(ivalue);

    printf("even factorial of number is %d",iret);

    return EXIT_SUCCESS;
}