#include<stdio.h>
#include<stdlib.h>
typedef unsigned long int ULONG;

ULONG factorial(int ino)
{
    int icnt=0;
    ULONG ifact=0;

    for(icnt=1,ifact=1;icnt<=ino;icnt++)
    {
        ifact=ifact*icnt;

    }
    return ifact;

}
int main()
{
    int ivalue=0;
    ULONG iret=0;
       
    printf("enter number:\n");
    scanf("%d",&ivalue);
    
    iret=factorial(ivalue);

    printf("factorial is :%ld\n",iret);

    return EXIT_SUCCESS;
}