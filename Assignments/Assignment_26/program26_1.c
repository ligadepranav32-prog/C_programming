/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                                     //
// Funtion Name:DisplayASCII                                                                                                                                                           //
// Descrition:program which dispaly ascii table contains symbol,decimal,hexademial and octual representation of every member from 0 to 225.                                            //
// Input:integer,characters                                                                                                                                                            //
// Output:characters,integer                                                                                                                                                           //
// Author:Pranav shankar ligade                                                                                                                                                        //
// Date:10/11/2026                                                                                                                                                                     //
//                                                                                                                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void DisplayASCII()
{
    int icnt=0;

    printf("Decmial\tHexadecimal\tOctal\tSymbol\n");
    printf("--------------------------------------------\n");

    for(icnt=0;icnt<=225;icnt++)
    {
        printf("%d\t%X\t\t%o\t%c\n");
    }
   
}
int main()
{
    
    DisplayASCII();

    return EXIT_SUCCESS;
}