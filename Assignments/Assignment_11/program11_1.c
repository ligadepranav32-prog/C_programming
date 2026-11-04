//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                 // 
// Funtion Name:RangeDisplay                                                                                                                       //
// Descrition:program which accept range from user and display all numbers in between that range   //it input is 90&18 then display invaild range  //                                      
// Input:integer,integer                                                                                                                           // 
// Output:integer                                                                                                                                  //
// Author:Pranav shankar ligade                                                                                                                    //
// Date:02/11/2026                                                                                                                                 //
//                                                                                                                                                 //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<Stdio.h>
#include<stdlib.h>

void RangeDisplay(int istart,int iend)
{
    
    int icnt=0;
    
    if(istart>iend)
    {
        printf("Invaild range");
        return;
    }
       
    for(icnt=istart;icnt<=iend;icnt++)
    {
        printf("%d\n",icnt);
    }
   
    

}
int main()
{
    int ivalue1=0,ivalue2=0;

    printf("enter starting point number\n");
    scanf("%d",&ivalue1);

    printf("enter ending point number\n");
    scanf("%d",&ivalue2);

    RangeDisplay(ivalue1,ivalue2);

    return EXIT_SUCCESS;
}