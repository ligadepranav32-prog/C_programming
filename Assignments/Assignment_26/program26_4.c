///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                                                                               //
// Funtion Name:ChkSpecial                                                                                                                                                                                                       //
// Descrition:accept character from user and check whether it is symbol or not not(!,@,#,$,%,^,&,*).                                                                                                                             //
//    /*                                                                                                                                                                                                                         //
//       1.input:-&                          2.input:-m                                                                                                                                                                          //        
//       output:-true                          output:-false                                                                                                                                                                     //
//    */                                                                                                                                                                                                                         //
// Input:integer,characters                                                                                                                                                                                                      //
// Output:characters                                                                                                                                                                                                             //
// Author:Pranav shankar ligade                                                                                                                                                                                                  //
// Date:10/11/2026                                                                                                                                                                                                               //
//                                                                                                                                                                                                                               //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int BOOL;
BOOL ChkSpecial(char ch)
{
    if(ch=='!'||ch=='@'||ch=='#'||ch=='$'||ch=='%'||ch=='^'||ch=='&'||ch=='*')
    {
        return 1;
    }
    else
    {
        return 0;
    }

   
}
int main()
{
    char cvalue=0;
    BOOL bret=false;
    
    printf("enter the character:\n");
    scanf("%c",&cvalue);
    
    bret=ChkSpecial(cvalue);

    if(bret==true)
    {
        printf("it is special character");
    }
    else
    {
        printf("it is not special character");
    }

    return EXIT_SUCCESS;
}