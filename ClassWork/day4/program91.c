#include<stdio.h>
#include<stdlib.h>
int factorial(int ino)
{
    int icnt=0,ifact=0;

    ifact=1;
    
    for(icnt=1;icnt<=ino;icnt++)
    {
        ifact=ifact*icnt;

    }
    return ifact;

}
int main()
{
    int ivalue=0,iret=0;
       
    printf("enter number:\n");
    scanf("%d",&ivalue);
    
    iret=factorial(ivalue);

    printf("factorial is :%d\n",iret);

    return EXIT_SUCCESS;
}