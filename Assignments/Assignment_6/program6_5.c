/////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                             // 
// Funtion Name:CalculateEmployeeBonus                                                         //
// Descrition:It use to perform calculate employee bonus                                         //
// Input:Integer,float                                                                       // 
// Output:Integer,float                                                                            //
// Author:Pranav shankar ligade                                                                //
// Date:22/10/2026                                                                             //
//                                                                                             //
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>

void calculateBonus(float fsalary, int iyear)
{
    float fBonus = 0.0f;

    if (fsalary <= 0 || iyear < 0)
    {
        printf("Invalid Input\n");
        return;
    }
    else
    {
        if (iyear > 10)
        {
            fBonus = fsalary * 0.15f;
        }
        else if (iyear >= 5)
        {
            fBonus = fsalary * 0.10f;
        }
        else
        {
            fBonus = fsalary * 0.05f;
        }

        printf("Bonus = %.2f\n", fBonus);
    }
}

int main()
{
    float fsalary = 0.0f;
    int iyear = 0;

    printf("Enter your salary and years of service:\n");
    scanf("%f %d", &fsalary, &iyear);

    calculateBonus(fsalary, iyear);

    return EXIT_SUCCESS;
}
