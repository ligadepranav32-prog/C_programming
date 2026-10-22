#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

boolcheckperfect(int ino)
{
    int icnt=0,isum=0;

    

    for(icnt=1;icnt<=ino/2;icnt++)
    {
        if((ino%icnt)==0)
        {
            isum=isum+icnt;
        }    
    }
   if(isum==ino)
   {
    return true;
   }
   else
   {
    return false;
   }

}
int main()
{
    int ivalue=0;
    bool bret=false;
    
    
    printf("enter number:\n");
    scanf("%d",&ivalue);
    
    bret=checkperfect(ivalue);
    if(bret==true)
    {
        printf("it is a perfect number");
    }
    else
    {
        printf("it is not a perfect number");

    }

    return EXIT_SUCCESS;
}

//time complexity:O(N/2)