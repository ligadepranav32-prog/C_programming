/////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                             // 
// Funtion Name:FindTheGreatestOfThreeNumber                                                   //
// Descrition:It use to perform check find the greatest of three number                        //
// Input:Intergr,Interger                                                                      // 
// Output:Interger                                                                             //
// Author:Pranav shankar ligade                                                                //
// Date:22/10/2026                                                                             //
//                                                                                             //
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
void findgreatest(int ifirst,int isecond,int ithird)
{
    if((ifirst>isecond)&&(ifirst>ithird))
    {
        printf("%d is the greatest number:\n",ifirst);

    }
    
    else if((isecond>ifirst)&&(isecond>ithird))
    {
        printf("%d is the greatest number:\n",isecond);

    }
    
    else
    {
        printf("%d is the greatest number:\n",ithird);

    }
}
int main()
{
    int ivalue1=0,ivalue2=0,ivalue3=0;

    printf("enter three numbers:");
    scanf("%d %d %d",&ivalue1,&ivalue2,&ivalue3);

    findgreatest(ivalue1,ivalue2,ivalue3);
    
    return EXIT_SUCCESS;
}