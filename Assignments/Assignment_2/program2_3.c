/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                             // 
// Funtion Name:AcceptNumerIfNumberIsLessThanTenPrintHelloOtherwisedemo                                        //
// Descrition:It use to perform acceptnumber if it is less than 10 thent print "Hello" otherwise print "Demo"  //
// Input:Integer,Interger                                                                                     // 
// Output:Integer                                                                                              //
// Author:Pranav shankar ligade                                                                                //
// Date:22/10/2026                                                                                             //
//                                                                                                             //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void display(int ino)
{
    if(ino<10)
    {
        printf("hello\n");
    }
    else
    {
        printf("demo");
    }
}
int main()
{
    int ivalue;
    printf("enter number:\n");
    scanf("%d",&ivalue);
    
    display(ivalue);

    return EXIT_SUCCESS;
}