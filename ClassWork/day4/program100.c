#include<stdio.h>
#include<stdlib.h>
void displayfactors(int ino)
{
    int icnt=0;

    printf("factors of %d are:\n",ino);

    for(icnt=1;icnt<ino;icnt++)
    {
        if((ino%icnt)==0)
        {
            printf("%d\n",icnt);
        }
    

    }

}
int main()
{
    int ivalue=0;
    
    
    printf("enter number:\n");
    scanf("%d",&ivalue);
    
    displayfactors(ivalue);

    return EXIT_SUCCESS;
}

//time complexity:O(N)