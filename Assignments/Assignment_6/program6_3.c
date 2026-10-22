/////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                             // 
// Funtion Name:CalculateShoppingDiscount                                                     //
// Descrition:It use to perform calculate shopping discount                                   //
// Input:Float,float                                                                                // 
// Output:Float                                                                                //
// Author:Pranav shankar ligade                                                                //
// Date:22/10/2026                                                                             //
//                                                                                             //
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void CalculateDiscount(float fAmount)
{
    float fDiscount=0.0f;
    float fFinalAmount=0.0f;

    if (fAmount < 0)
    {
        printf("Invalid purchase amount\n");
        return;
    }
    else if (fAmount < 1000)
    {
        fDiscount = 0;
    }
    else if (fAmount < 5000)
    {
        fDiscount = 10;
    }
    else
    {
        fDiscount = 20;
    }

    fFinalAmount = fAmount - (fAmount * fDiscount / 100);

    printf("Payable Amount = %.2f\n", fFinalAmount);
}



int main()
{
    float fAmount=0.0f;

    printf("enter purchase amount:\n");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}