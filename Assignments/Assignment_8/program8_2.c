/////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                             // 
// Funtion Name:Display                                                                        //
// Descrition:Accept single digit number from user and print it into word                      //
// Input:Integer,Integer                                                                       // 
// Output:Integer                                                                              //
// Author:Pranav shankar ligade                                                                //
// Date:30/10/2026                                                                             //
//                                                                                             //
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void display(int ino)
{
    if(ino == 0)
    {
        printf("Zero");
    }
    else if(ino == 1)
    {
        printf("One");
    }
    else if(ino == 2)
    {
        printf("Two");
    }
    else if(ino == 3)
    {
        printf("Three");
    }
    else if(ino == 4)
    {
        printf("Four");
    }
    else if(ino == 5)
    {
        printf("Five");
    }
    else if(ino == 6)
    {
        printf("Six");
    }
    else if(ino == 7)
    {
        printf("Seven");
    }
    else if(ino == 8)
    {
        printf("Eight");
    }
    else if(ino == 9)
    {
        printf("Nine");
    }
    else
    {
        printf("Invalid number");
    }

}
int main()
{
    int ivalue=0;

    printf("enter number:\n");
    scanf("%d",&ivalue);

    display(ivalue);
    return EXIT_SUCCESS;
}