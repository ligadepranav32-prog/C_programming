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
//////////////////////////////////////////////////////////////////////
//                                                                  //
//  funtion name:   addition
//  input       :   integer,integer
//  output      :   integer
//  description :   perform addition
//  date        :   04/10/2026
//  author      :   pranav shankar ligade
//
//////////////////////////////////////////////////////////////////////
int Addition(int ino1,int ino2)
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
    scanf("%d",&ivalue1);

    printf("enter second number:\n");
    scanf("%d",&ivalue2);

    iresult=Addition(ivalue1,ivalue2);  

    printf("addition is:%d\n",iresult);

    return 0;
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