#include<stdio.h>

double FhtoCs(float fTemp){
    double dConversion=0.0;

    dConversion=((fTemp-32)*5)/9;

    return dConversion;
}

int main(){
    float fValue=0.0;
    double dRet=0.0;

    printf("Enter temperature in Fahrenheit :\n");
    scanf("%f",&fValue);

    dRet=FhtoCs(fValue);

    printf("%f Fh : %f Cs",fValue,dRet);

    return 0;
}