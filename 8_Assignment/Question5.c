#include<stdio.h>

int FactorialDiff(int iNo){
    if(iNo<0){
        iNo=-iNo;
    }
    int iCnt=0;
    int iEvenFacto=1;
    int iOddFacto=1;
    for(iCnt=1;iCnt<=iNo;iCnt++){
        if((iCnt%2)==0){
            iEvenFacto=iEvenFacto*iCnt;
        }
        if((iCnt%2)!=0){
            iOddFacto=iOddFacto*iCnt;
        }
    }

    return iEvenFacto-iOddFacto;
}

int main(){
    int iValue=0;
    int iRet=0;
    printf("Enter number");
    scanf("%d",&iValue);

    iRet=FactorialDiff(iValue);

    printf("factorial differnce is %d",iRet);

    return 0;
}





