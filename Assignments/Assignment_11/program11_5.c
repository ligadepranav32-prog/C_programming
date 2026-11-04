/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 // 
// Funtion Name:RangeDisplay                                                                                                                                       //
// Descrition:program which accept range from user and display all numbers in between that range in reverse order //it input is 90&18 then display invaild range  //                                      
// Input:integer,integer                                                                                                                                           // 
// Output:integer                                                                                                                                                  //
// Author:Pranav shankar ligade                                                                                                                                    //
// Date:02/11/2026                                                                                                                                                 //
//                                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int icnt=0;

    if (iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    for (icnt =iEnd;icnt>=iStart;icnt--)
    {
        printf("%d\n", icnt);
    }

   
}

int main()
{
    int iValue1, iValue2;

    printf("enter starting numbers:\n");
    scanf("%d ", &iValue1);

    printf("enter ending numbers:\n");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}