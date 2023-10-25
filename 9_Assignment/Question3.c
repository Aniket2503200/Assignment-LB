#include<stdio.h>

int KMtoMeter(int iNo){
    int iConversion=0;

    iConversion=iNo*1000;

    return iConversion;
}

int main(){
    int iValue=0;
    int iRet=0;

    printf("Enter Distance :\n");
    scanf("%d",&iValue);

    iRet=KMtoMeter(iValue);

    printf("%d kilometer : %d Meter",iValue,iRet);

    return 0;
}