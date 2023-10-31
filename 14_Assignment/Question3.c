#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Frequency(int Arr[],int iLength){
    int iCnt=0;
    BOOL bFlag=FALSE;
    for(iCnt=0;iCnt<iLength;iCnt++){
        if((Arr[iCnt])==11){
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

    bRet=Frequency(p,iSize);
    if(bRet==TRUE){
        printf("11 is Present");
    }
    else{
        printf("11 is Absent");
    }

    

    free(p);




    return 0;
}













