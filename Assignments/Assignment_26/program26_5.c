/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                                     //
// Funtion Name:Display                                                                                                                                                                //
// Descrition:program accept character from user and display its ASCII value in decimal,octal and hexadecimal format.                                                                  //
//            input:A                                                                                                                                                                  //
//            output:decimal 65,octal 0101,hexadecimal 0x41                                                                                                                            //
// Input:integer,characters                                                                                                                                                            //
// Output:integer                                                                                                                                                                      //
// Author:Pranav shankar ligade                                                                                                                                                        //
// Date:10/11/2026                                                                                                                                                                     //
//                                                                                                                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    int icnt=0;

    printf("Decimal       : %d\n",ch);
    printf("Octal         : %#o\n",ch);
    printf("Hexadecimal   : %#x\n",ch);

   
}
int main()
{
    char cvalue='\0';

    printf("enter the character\n");
    scanf("%c",&cvalue);
    
    Display(cvalue);

    return EXIT_SUCCESS;
}