/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                                                                     //
// Funtion Name:DisplaySchedule                                                                                                                                                        //
// Descrition:accept divsion of student from user.there four division in school as A,B,C,D.exam of A at 7am,b at 8:30am,c at 9.20am & D at 1:30(application should be case insensitive)//                           
//    /*                                                                                                                                                                               //
//       1.input:-c                          2.input:-D                                                                                                                                //        
//       output:-your exam at 9:20am         output:-your exam at 10:30am                                                                                                              //
//    */                                                                                                                                                                               //
// Input:integer,characters                                                                                                                                                            //
// Output:characters,integer                                                                                                                                                           // 
// Author:Pranav shankar ligade                                                                                                                                                        //
// Date:10/11/2026                                                                                                                                                                     //
//                                                                                                                                                                                     //
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void DisplaySchedule(char chdiv)
{ 
    
        if(chdiv=='a'||chdiv=='A')
        {
            printf("your exam at 7:00AM");
        }
        else if(chdiv=='b'||chdiv=='B')
        {
            printf("your exam at 8:30AM");
        }
        else if(chdiv=='c'||chdiv=='C')
        {
            printf("your exam at 9:20AM");
        }
        else if(chdiv=='d'||chdiv=='D')
        {
            printf("your exam at 10:30AM");
        }
        else
        {
            printf("invaild division");
        }
        
   
}
int main()
{
    char cvalue='\0';

    printf("enter the character\n");
    scanf("%c",&cvalue);

    DisplaySchedule(cvalue);

    return EXIT_SUCCESS;
}