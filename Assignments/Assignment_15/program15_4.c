/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                 // 
// Funtion Name:Multiply                                                                                                                                           //
// Descrition:program which accept three numbers and print its multiplication                                                                                      //
// Input:integer,integer                                                                                                                                           // 
// Output:integer                                                                                                                                                  //
// Author:Pranav shankar ligade                                                                                                                                    //
// Date:03/11/2026                                                                                                                                                 //
//                                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

int Multiply(int ino1,int ino2,int ino3)
{
    int isum=1;
    int icnt=0;

    if(ino1!=0)
    {
        isum*=ino1;
        icnt++;
    }
    if(ino2!=0)
    {
        isum*=ino2;
        icnt++;
    }
    if(ino3!=0)
    {
        isum*=ino3;
        icnt++;
    }
    if(icnt==0)
        return 0;

    return isum;

}
int main()
{
    int ivalue1=0,ivalue2=0,ivalue3=0,iret=0;

    printf("enter first number\n");
    scanf("%d",&ivalue1);

    printf("enter second number\n");
    scanf("%d",&ivalue2);

    printf("enter third number\n");
    scanf("%d",&ivalue3);

    iret=Multiply(ivalue1,ivalue2,ivalue3);

    printf("multiplication of numbers is:%d\n",iret);

    return EXIT_SUCCESS;
    
}