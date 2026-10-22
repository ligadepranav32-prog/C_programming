/////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                             // 
// Funtion Name:FindTheGreaterOfTwoNumber                                                      //
// Descrition:It use to perform find the greater of two number                                 //
// Input:Intergr,Interger                                                                      // 
// Output:Interger                                                                             //
// Author:Pranav shankar ligade                                                                //
// Date:22/10/2026                                                                             //
//                                                                                             //
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void findgreater(int ino1,int ino2)
{
    if(ino1>ino2)
    {
        printf("the greater number is :%d",ino1);
    }

    else
    {
        printf("the greater number is %d",ino2);
    }

   

}
int main()
{
    int ivalue1=0;
    int ivalue2=0;


    printf("enter first number:\n");
    scanf("%d",&ivalue1);

    printf("enter second number:\n");
    scanf("%d",&ivalue2);


    findgreater(ivalue1,ivalue2);

    return EXIT_SUCCESS;
    

}