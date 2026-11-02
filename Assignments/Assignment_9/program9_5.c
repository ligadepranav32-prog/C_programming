//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                          // 
// Funtion Name:FactorialDiff                                                                                                               //
// Descrition:program which which return difference between even factotrial and odd factorial of given number(input:5 output:-7     (8-15)) //
// Input:Integer,Integer                                                                                                                    // 
// Output:Integer                                                                                                                           //
// Author:Pranav shankar ligade                                                                                                             //
// Date:30/10/2026                                                                                                                          //
//                                                                                                                                          //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    return iEvenFact - iOddFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d\n", iRet);

    return EXIT_SUCCESS;
}