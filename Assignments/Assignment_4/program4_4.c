/////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                             // 
// Funtion Name:CheckVotingEligibility                                                         //
// Descrition:It use to perform check voting eligibility                                       //
// Input:Intergr,Interger                                                                      // 
// Output:Interger                                                                             //
// Author:Pranav shankar ligade                                                                //
// Date:22/10/2026                                                                             //
//                                                                                             //
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void checkVotingEligibility(int iage)
{
    if(iage<=0)
    {
        printf("invaild age");
    }
    else if(iage>=18)
    {
        printf("you are eliglible for voting");
    }
    
    else
    {
        printf("you are not eliglible for voting");
    }
}
int main()
{
    int iage=0;

    printf("enter your age:\n");
    scanf("%d",&iage);

    checkVotingEligibility(iage);

    return EXIT_SUCCESS;
}