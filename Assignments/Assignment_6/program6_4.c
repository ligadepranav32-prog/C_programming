/////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                             // 
// Funtion Name:CheckTriangleValidity                                                          //
// Descrition:It use to perform check triangle validity                                        //
// Input:Integer,Integer                                                                       // 
// Output:Integer                                                                              //
// Author:Pranav shankar ligade                                                                //
// Date:22/10/2026                                                                             //
//                                                                                             //
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void checkTriangle(int iside1, int iside2, int iside3)
{
    if (iside1 > 0 && iside2 > 0 && iside3 > 0 &&
        iside1 + iside2 > iside3 &&
        iside1 + iside3 > iside2 &&
        iside2 + iside3 > iside1)
    {
        printf("Valid Triangle\n");
    }
    else
    {
        printf("Invalid Triangle\n");
    }
}

int main()
{
    int iside1 = 0, iside2 = 0, iside3 = 0;

    printf("Enter three sides: ");
    scanf("%d %d %d", &iside1, &iside2, &iside3);

    checkTriangle(iside1, iside2, iside3);

    return EXIT_SUCCESS;
}
