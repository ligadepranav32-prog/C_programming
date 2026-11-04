/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 // 
// Funtion Name:Countfour                                                                                                                                          //
// Descrition:program which accept number from user and count frequency of 4 in it.                                                                                //
// Input:integer,integer                                                                                                                                           // 
// Output:integer                                                                                                                                                  //
// Author:Pranav shankar ligade                                                                                                                                    //
// Date:02/11/2026                                                                                                                                                 //
//                                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int Countfour(int ino)
{
    int idigit=0;
    int icnt=0;
    

    if(ino<0)
    {
        ino=-ino;
    }

    while(ino!=0)
    {
        idigit=ino%10;
        
        if(idigit==4)
        {
            icnt++;
        }
        ino=ino/10;
    }

        return icnt;
}

int main()
{
    int ivalue=0,iret=0;

    printf("enter number\n");
    scanf("%d",&ivalue);

    iret=CountTwo(ivalue);

    printf("frequency of four is:%d\n",iret);
   
    return EXIT_SUCCESS;
}