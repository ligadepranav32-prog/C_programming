//input=10
//1 3 5 7 9
#include<stdio.h>
#include<stdlib.h>
void display(int ino)
{
    int icnt=0;
    for(icnt=1;icnt<=ino;icnt++)
    {
    printf("%d\t",icnt);
    icnt++;
    }
    printf("\n");
}
int main()
{
    int ivalue=0;

    printf("enter the frequency\n");
    scanf("%d",&ivalue);
    
    display(ivalue);


    return EXIT_SUCCESS;
}