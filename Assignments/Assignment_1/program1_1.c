/////////////////////////////////////////////////////////////
//                                                         // 
// Funtion Name:DivideTwoNumbers                           //
// Descrition:It use to perform divide a two munber        //
// Input:Integer,Integer                                   // 
// Output:Integer                                          //
// Author:Pranav shankar ligade                            //
// Date:22/10/2026                                         //
//                                                         //
/////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
int divide(int ino1,int ino2)
{
    int ians=0;
    if(ino2==0)
    {
        return EXIT_FAILURE;
    }
    ians=ino1/ino2;
    return ians;
}
int main()
{
    int ivalue1=15,ivalue2=5;
    int iret=0;

    iret=divide(ivalue1,ivalue2);

    printf("division is: %d\n",iret);


    return EXIT_SUCCESS;
}