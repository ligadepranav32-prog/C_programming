/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 // 
// Funtion Name:CountDiff                                                                                                                                          //
// Descrition:program which accept number from user and return difference between summation of even digits and summation of odd digits.                             //
// Input:integer,integer                                                                                                                                           // 
// Output:integer                                                                                                                                                  //
// Author:Pranav shankar ligade                                                                                                                                    //
// Date:03/11/2026                                                                                                                                                 //
//                                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int CountDiff(int ino)
{
    int idigits=0;
    int isum1=0;
    int isum2=0;
    

    if(ino<0)
    {
        ino=-ino;
    }

    while(ino!=0)
    {
        idigits=ino%10;
        if(idigits%2==0)
        {
            isum1=isum1+idigits;
        }
        else
        {
            isum2=isum2+idigits;
        }
      
        
        ino=ino/10;
    }
    


    return (isum1-isum2);
}
int main()
{
    int ivalue=0,iret=0;

    printf("enter number\n");
    scanf("%d",&ivalue);

    iret=CountDiff(ivalue);

    printf("summation is:%d",iret);

    return EXIT_SUCCESS; 
}