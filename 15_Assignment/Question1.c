#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int Arr[],int iLength,int iNo){
    int iCnt=0;
    BOOL bFlag=FALSE;
    for(iCnt=0;iCnt<iLength;iCnt++){
        if((Arr[iCnt])==iNo){
            bFlag=TRUE;
            break; 
        }
    }

    return bFlag;
}


int main(){
    int iSize=0;
    int *p=NULL;
    int iCnt=0;
    BOOL bRet=FALSE;
    int iValue=0;

    printf("Enter the elements that you want to entered :\n");
    scanf("%d",&iSize);

    p=(int*)malloc(iSize*sizeof(int));
    if(p==NULL){
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Dynamic memory is allocated......\n");
    printf("Enter the %d elements :\n",iSize);

    for(iCnt=0;iCnt<iSize;iCnt++){
        printf("Enter the element %d\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    printf("Enter number that you want to search :\n");
    scanf("%d",&iValue);

    bRet=Check(p,iSize,iValue);
    if(bRet==TRUE){
        printf("Number is Present");
    }
    else{
        printf("Number is not present");
    }

    

    free(p);




    return 0;
}













