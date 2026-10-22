/*
    step 1:understand the problem statment
    step 2:write the algorithm
    step 3:decide the programming language
    step 4:write a program
    step 5:test the program
*/
//////////////////////////////////////////////////////////////////////////
//                                                                      //
//step 1:understand the problem statment                                //
//user os going to enter any 2 integer and we have to perform addition  //
//                                                                      //
/////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////
// step 2: write the algorithm                                      //
/*                                                                  //
START                                                               //
    accept first number as no1                                      //
    accept second number as no2                                     //
    create the variable to store result as ans                      //
    perform the addition of no1+no2                                 //
    store result ans                                                //
    display result                                                  //
END                                                                 //    
*/                                                                  //
//////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////
// step 3:decide the programming language                           //
//we decide c programming language                                  //
//////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////
// /*                                                               //
// step 4:write a program                                           //
// */                                                               //
//////////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int ivalue1=0,ivalue2=0,iresult=0;

    printf("enter first number:\n");
    scanf("%d",&ivalue1);

    printf("enter second number:\n");
    scanf("%d",&ivalue2);


    iresult=ivalue1+ivalue2;    //business logic

    printf("addition is:%d\n",iresult);

    return 0;
}