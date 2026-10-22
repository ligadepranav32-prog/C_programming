/////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                             // 
// Funtion Name:CalculateElectricityBill                                                       //
// Descrition:It use to perform calculate electricity bill                                     //
// InputInterger,Float                                                                         // 
// Output:Interger                                                                             //
// Author:Pranav shankar ligade                                                                //
// Date:22/10/2026                                                                             //
//                                                                                             //
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void CalculateElectricityBill(int iunit)
{
    float fBill=0.0f;

    if (iunit < 0)
    {
        printf("Invalid unit consumption!\n");
        return;
    }
    else if (iunit <= 100)
    {
        fBill = iunit * 5;
    }
    else if (iunit <= 200)
    {
        fBill = (100 * 5) + ((iunit - 100) * 7);
    }
    else
    {
        fBill = (100 * 5) + (100 * 7) + ((iunit - 200) * 10);
    }

    printf("Bill = %.2f\n", fBill);
}

int main()
{
    int iunit=0;

    printf("enter consumed units:\n");
    scanf("%d",&iunit);

    CalculateElectricityBill(iunit);

    return EXIT_SUCCESS;
}