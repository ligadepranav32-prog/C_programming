#include<stdio.h>
#include<stdlib.h>
void display(int ino)
{
    int icnt=0;
    for(icnt=1;icnt<=ino;icnt++)
    {
    printf("%d\n",icnt);
    }
}
int main()
{
    int ivalue=0;

    printf("enter thr frequency\n");
    scanf("%d",&ivalue);
    display(ivalue);


    return EXIT_SUCCESS;
}