#include<stdio.h>
#include<stdlib.h>
int Addition(
                int ino1,   //first input
                int ino2   //second input
            )
{
    int ians=0;

    ians=ino1+ino2;        //business logic

    return ians;
}
//////////////////////////////////////////////////////////////////////
//
// entery point of that application
//
//////////////////////////////////////////////////////////////////////
int main()
{
    int ivalue1=0,ivalue2=0,iresult=0;

    printf("enter first number:\n");
    if(scanf("%d",&ivalue1) !=1)
    {
        fprintf(stderr,"unable to proceed as input is invaild\n");

        return EXIT_FAILURE;
    }

    printf("enter second number:\n");
    if(scanf("%d",&ivalue2) !=1)
    {
        fprintf(stderr,"unable to proceed as input is invaild\n");

        return EXIT_FAILURE;
    }

    iresult=Addition(ivalue1,ivalue2);  

    printf("addition is:%d\n",iresult);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////
//                                                                  //
//  step 5:test the program                                         //
//  tested test case                                                //
//|--------------------------------------------------------------|  //
//| input1     input2       output                               |  //
//|--------------------------------------------------------------|  //
//|     10        11           21                                |  //
//|     11        0            11                                |  //
//|     0         11           11                                |  //
//|     20        -9           11                                |  //
//|    -9        20           11                                 |  //
//|     -20       -11          -31                               |  //
//|--------------------------------------------------------------|  //
//////////////////////////////////////////////////////////////////////