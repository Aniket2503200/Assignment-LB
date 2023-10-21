#include<stdio.h>

int Factorial(int iNo){
    if(iNo<0){
        iNo=-iNo;
    }
    int iFacto=1;
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++){
        iFacto=iFacto*iCnt;
    }
    

    return iFacto;
}

int main(){
    int iValue=0;
    int iRet=0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet=Factorial(iValue);

    printf("Factorial of number is %d",iRet);

    return 0;
}