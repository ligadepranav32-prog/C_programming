#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool checkeven(int ino)
{
    if((ino % 2)==0)
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

    bret=checkeven(ivalue);
    
    if(bret==true)
    {
        printf("it is even\n");
    }

    else
    {
        printf("it is false");
    }

    return EXIT_SUCCESS;
}