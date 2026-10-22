/////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                             // 
// Funtion Name:CheckAdmissionEligibility                                                       //
// Descrition:It use to perform check admission eligibility                                      //
// InputInterger,Float                                                                         // 
// Output:Interger                                                                             //
// Author:Pranav shankar ligade                                                                //
// Date:22/10/2026                                                                             //
//                                                                                             //
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void checkAdmission(float fMarks,int iAge)
{
    if (fMarks < 0 || fMarks > 100 || iAge < 0)
    {
        printf("Invalid Input\n");
    }
    else if (fMarks >= 60 && iAge >= 17)
    {
        printf("Eligible for Admission\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
}
int main()
{
    float fMarks=0.0f;
    int iAge=0;

    printf("enter your marks and age:\n");
    scanf("%f %d",&fMarks,&iAge);

    checkAdmission(fMarks,iAge);

    return EXIT_SUCCESS;
}