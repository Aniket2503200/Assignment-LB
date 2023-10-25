#include<stdio.h>

int RangeSumEven(int iStart,int iEnd){
     int iSum=0;
     int iCnt=0;
   
    for(iCnt=iStart;iCnt<=iEnd;iCnt++){
        if((iCnt%2)==0){
        iSum=iSum+iCnt;
        }
    }

    return iSum;
}

int main(){
    int iValue1=0;
    int iValue2=0;
    int iRet=0;

    printf("Enter Starting point:\n");
    scanf("%d",&iValue1);
    printf("Enter ending point:\n");
    scanf("%d",&iValue2);

     if(iValue1>iValue2 ||iValue1<0 || iValue2<0){
        printf("InValid range");
        return 1;
    }

    iRet=RangeSumEven(iValue1,iValue2);
    printf("Addition is %d",iRet);


    return 0;
}