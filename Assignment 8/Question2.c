#include<stdio.h>

int DollerToINR(int iNo){
    int iConversion=0;

    iConversion=(iNo*70);

    return iConversion;
}

int main(){
    int iValue=0;
    int iRet=0;
    printf("Enter number of USD");
    scanf("%d",&iValue);

    iRet=DollerToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}