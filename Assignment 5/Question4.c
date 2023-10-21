#include<stdio.h>

int Multiply(int iNo1,int iNo2,int iNo3){
    int iMulti=0;

    if(iNo1==0 && iNo2==0){
        return iNo3;
    }
    else if(iNo2==0 && iNo3==0){
        return iNo1;
    }
    else if(iNo1==0 && iNo3==0){
        return iNo2;
    }

    else if(iNo1==0){
        return iNo2*iNo3;
    }
    else if(iNo2==0){
        return iNo1*iNo3;
    }
    else if(iNo3==0){
        return iNo1*iNo2;
    }
    
    iMulti=iNo1*iNo2*iNo3;

    return iMulti;
}

int main(){
    int iValue1=0;
    int iValue2=0;
    int iValue3=0;
    int iRet=0;

    printf("Please enter three numbers");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);

    iRet=Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication : %d",iRet);

    return 0;
}



