/*
    --------------------------------------
            operation ||          
    --------------------------------------           
    result1    result2     final result
    --------------------------------------
    true         true        true      short circuit
    true         false       true      short circuit
    false        true        true
    false        false       false
    --------------------------------------
*/
#include<stdio.h>
#include<stdlib.h>
void checkdivisible(int ino)
{

    if(((ino%5)||(ino%3)==0))
    {
        printf("it is divisible\n");
    }

    else
    {
        printf("it is not divisible\n");
    }
}
int main()
{
    int ivalue=0;
    printf("enter number:\n");
    scanf("%d",&ivalue);

    checkdivisible(ivalue);

    return EXIT_SUCCESS;
}