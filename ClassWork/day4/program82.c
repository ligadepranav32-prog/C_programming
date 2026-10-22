//input=10
//1 3 5 7 9
#include<stdio.h>
#include<stdlib.h>
int summation(int ino)
{
    int icnt=0;
    int isum=0;

    isum=1;
    for(icnt=1;icnt<=ino;icnt++)
    {
     isum=isum*icnt;
    }
    return isum;
}
int main()
{
    int ivalue=0;
    int iret=0;

    printf("enter the frequency\n");
    scanf("%d",&ivalue);
    
    iret=summation(ivalue);

    printf("summation is:%d\n",iret);

    return EXIT_SUCCESS;
}