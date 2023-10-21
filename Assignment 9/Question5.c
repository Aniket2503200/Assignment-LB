#include<stdio.h>

double SquareMeter(int iNo){
    double dConversion=0;

    dConversion=iNo*0.0929;

    return dConversion;
}

int main(){
    int iValue=0;
    double dRet=0.0;

    printf("Enter Area in Square feet:\n");
    scanf("%d",&iValue);

    dRet=SquareMeter(iValue);

    printf("%d squareFeet : %f SquareMeter",iValue,dRet);

    return 0;
}