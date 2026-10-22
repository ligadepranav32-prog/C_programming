#include<stdio.h>
#include<stdlib.h>
unsigned long int factorial(int ino)
{
    int icnt=0;
    unsigned long long ifact=0;

    for(icnt=1,ifact=1;icnt<=ino;icnt++)
    {
        ifact=ifact*icnt;

    }
    return ifact;

}
int main()
{
    int ivalue=0;
    unsigned long long iret=0;
       
    printf("enter number:\n");
    scanf("%d",&ivalue);
    
    iret=factorial(ivalue);

    printf("factorial is :%ld\n",iret);

    return EXIT_SUCCESS;
}