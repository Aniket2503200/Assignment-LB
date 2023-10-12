#include<stdio.h>

void FactRev(int iNo){
    int icnt=0;
    for(icnt=(iNo/2);icnt>=1;icnt--){
        if((iNo%icnt)==0){
            printf("%d\t",icnt);
        }
    }
}

int main(){
    int iValue=0;

    printf("Enter number");
    scanf("%d",&iValue);

    FactRev(iValue);


    return 0;
}