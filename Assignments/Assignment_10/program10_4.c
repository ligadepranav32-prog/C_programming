//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                                          // 
// Funtion Name:FHtoCS                                                                                                                      //
// Descrition:program which accept tempreature in fahrenheit and convert it into celsius(1 celsius=(fahreheit-32)*(5/9))                    //
// Input:float,double                                                                                                                       // 
// Output:float                                                                                                                             //
// Author:Pranav shankar ligade                                                                                                             //
// Date:30/10/2026                                                                                                                          //
//                                                                                                                                          //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
double FHtoCS(float fTemp)
{
    double fCelsius=0.0;

    fCelsius=(fTemp-32)*(5.0/9.0);

    return fCelsius;

}
int main()
{
    float fvalue=0.0f;
    double dret=0.0;

    printf("enter tempertature in fahrenheit:\n");
    scanf("%f",&fvalue);

    dret=FHtoCS(fvalue);

    printf("celsius is:%lf",dret);
    
    return EXIT_SUCCESS;
}