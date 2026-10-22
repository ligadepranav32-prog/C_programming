#include<stdio.h>
#include<stdlib.h>
void checkperfect(int ino)
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
    printf("it is a perfect number");
   }
   else
   {
    printf("it is not perfect number");
   }

}
int main()
{
    int ivalue=0;
    
    
    printf("enter number:\n");
    scanf("%d",&ivalue);
    
    checkperfect(ivalue);

    return EXIT_SUCCESS;
}

//time complexity:O(N/2)