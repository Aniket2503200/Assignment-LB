#include<stdio.h>

float Percentage(int iNo1,int iNo2){
    float fpercentage=0.0;

    if((iNo1<0) || (iNo2<0) || (iNo1<iNo2)){
        printf("Invalid Input\n");
        return fpercentage;
    }

    fpercentage=((float)(iNo2)/(float)(iNo1))*100;

    return fpercentage;
}

int main(){

    int iValue1=0;
    int iValue2=0;
    float fRet=0.0;

    printf("Please enter total marks : \n");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks : \n");
    scanf("%d",&iValue2);

    fRet=Percentage(iValue1,iValue2);

    printf("Your Percentage : %.2f",fRet);



    return 0;
}