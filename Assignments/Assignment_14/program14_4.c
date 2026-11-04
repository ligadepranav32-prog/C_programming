/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 // 
// Funtion Name:FactSum                                                                                                                                            //
// Descrition:program which accept number from user and display return summation of all non factors                                                                //
// Input:integer,integer                                                                                                                                           // 
// Output:integer                                                                                                                                                  //
// Author:Pranav shankar ligade                                                                                                                                    //
// Date:03/11/2026                                                                                                                                                 //
//                                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int FactSum(int ino)
{
    int icnt=0;
    int isum=0;
   

    for(icnt=1;icnt<=ino;icnt++)
    {
        
        if(ino % icnt !=0)
        {
            isum=isum+icnt;
            
        }
    }

    return isum;
}
int main()
{
    int ivalue=0,iret=0;

    printf("enter number\n");
    scanf("%d",&ivalue);

    iret=FactSum(ivalue);

    printf("summation of non factors is:%d\n",iret);

    return EXIT_SUCCESS;
}