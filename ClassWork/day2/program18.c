#include<stdio.h>
#include<stdlib.h>
void checkeven(int ino)
{
    if((ino % 2)==0)
    {
        printf("it is even number\n");
    }
    else
    {
        printf("it is odd number\n");
    }

    


}
int main()
{
    int ivalue=0;

    printf("enter number:\n");
    scanf("%d",&ivalue);

    checkeven(ivalue);
     

    return EXIT_SUCCESS;
}