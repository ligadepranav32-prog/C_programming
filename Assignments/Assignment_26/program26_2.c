////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                                            //
// Funtion Name:Display                                                                                                                                                                      //
// Descrition:accept character from user.if charater is small display its corresponding capital character,and if it small then display its corresponding capitcal.in other case display as it.//                                                                                                                    //
//    /*                                                                                                                                                                                      //
//       1.input:-Q                          2.input:-M     3.input:4      5.input:%                                                                                                          //        
//       output:-q                             output:-m      output:4     output:%                                                                                                           //
//    */                                                                                                                                                                                      //
// Input:integer,characters                                                                                                                                                                   //
// Output:characters                                                                                                                                                                          //
// Author:Pranav shankar ligade                                                                                                                                                               //
// Date:10/11/2026                                                                                                                                                                            //
//                                                                                                                                                                                            //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    if(ch<='a'&&ch>='z')
    {
        ch=ch-32;
    }
    else if(ch>='A'&&ch<='Z')
    {
        ch=ch+32;
    }


    printf("converted character is %c\n",ch);
   
}
int main()
{
    char cvalue=0;
    
    printf("enter the character:\n");
    scanf("%c",&cvalue);
    
    Display(cvalue);

    return EXIT_SUCCESS;
}