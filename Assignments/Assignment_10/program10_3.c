//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                          // 
// Funtion Name:KMtoMeeter                                                                                                                  //
// Descrition:program which which accept distance in kilometer and convert into meter.(1 kilometer=1000 meter)                              //
// Input:integer,integer                                                                                                                       // 
// Output:integer                                                                                                                             //
// Author:Pranav shankar ligade                                                                                                             //
// Date:30/10/2026                                                                                                                          //
//                                                                                                                                          //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
int KMtoMeter(int ino)
{
    int isum=0;

    isum=ino*1000;

    return isum;

}
int main()
{
    int ivalue=0,iret=0;
   

    printf("enter Distance:\n");
    scanf("%d",&ivalue);

    iret=KMtoMeter(ivalue);

    printf("distance in meter is:%d",iret);
    
    return EXIT_SUCCESS;
}