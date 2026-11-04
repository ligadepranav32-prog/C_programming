/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 // 
// Funtion Name:FactDiff                                                                                                                                           //
// Descrition:program which accept number from user and display return summation of all factors and non factors                                                    //
// Input:integer,integer                                                                                                                                           // 
// Output:integer                                                                                                                                                  //
// Author:Pranav shankar ligade                                                                                                                                    //
// Date:03/11/2026                                                                                                                                                 //
//                                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int FactDiff(int ino)
{
    int icnt;
    int isum1=0;
    int isum2=0;
   

    for(icnt=1;icnt<=ino;icnt++)
    {
        
        if(ino % icnt ==0)
        {
            isum1=isum1+icnt;
            
        }

        else
        {
            isum2=isum2+icnt;
        }
    }

    return isum1-isum2;
}
int main()
{
    int ivalue=0,iret=0;

    printf("enter number\n");
    scanf("%d",&ivalue);

    iret=FactDiff(ivalue);

    printf("summation of non factors is:%d\n",iret);

    return EXIT_SUCCESS;
}