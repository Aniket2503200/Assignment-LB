#include<stdio.h>

void NonFact(int iNo){
    int icnt=0;
    for(icnt=1;icnt<=iNo;icnt++){
        if((iNo%icnt)!=0){
            printf("%d\t",icnt);
        }
    }
}

int main(){
    int iValue=0;

    printf("Enter number");
    scanf("%d",&iValue);

    NonFact(iValue);


    return 0;
}