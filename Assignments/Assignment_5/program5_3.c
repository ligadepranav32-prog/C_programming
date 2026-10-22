/////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                             // 
// Funtion Name:CalculateStudentGrade                                                          //
// Descrition:It use to perform calculate student grade                                        //
// Input:Float,Float                                                                           // 
// Output:Float                                                                                //
// Author:Pranav shankar ligade                                                                //
// Date:22/10/2026                                                                             //
//                                                                                             //
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void displayGrade(float fmarks)
{
    
    if(fmarks<0||fmarks>100)
    {
        printf("invaild marks\n");
    }
    else if(fmarks>=90)
    {
        printf("Grade is A\n");
    }

    else if(fmarks>=75)
    {
        printf("Grade is B\n");
    }

    else if(fmarks>=60)
    {
        printf("Grade is c\n");
    }

    else if(fmarks>=40)
    {
        printf("Grade is D\n");
    }

    else
    {
        printf("fail");
    }
}
int main()
{
    float fmarks=0.0f;

    printf("enter marks:\n");
    scanf("%f",&fmarks);

    displayGrade(fmarks);

    return EXIT_SUCCESS;
}