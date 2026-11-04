////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                            // 
// Funtion Name:RangeDisplay                                                                                                                                  //
// Descrition:program which accept range from user and return addition of all numbers in between that range   //it input is 90&18 then display invaild range  //                                      
// Input:integer,integer                                                                                                                                      // 
// Output:integer                                                                                                                                             //
// Author:Pranav shankar ligade                                                                                                                               //
// Date:02/11/2026                                                                                                                                            //
//                                                                                                                                                            //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iSum = 0;
    int iCnt = 0;

    if (iStart <= 0 || iEnd <= 0)
    {
        printf("invalid range\n");
        return 0;
    }
    else if (iStart >= iEnd)
    {
        printf("invalid range\n");
        return 0;
    }
    else
    {
        for (iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            if (iCnt % 2 == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        return iSum;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("enter starting point:\n");
    scanf("%d", &iValue1);

    printf("enter ending point:\n");
    scanf("%d", &iValue2);

    if (iValue1 <= 0 || iValue2 <= 0 ||
        iValue1 >= iValue2)
    {
        printf("invalid range\n");
    }
    else
    {
        iRet = RangeSumEven(iValue1, iValue2);
        printf("addition is %d\n", iRet);
    }

    return 0;
}