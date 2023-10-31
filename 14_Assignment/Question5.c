#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iNo){
    int iCnt=0;
    int iCount=0;
    for(iCnt=0;iCnt<iLength;iCnt++){
        if((Arr[iCnt])==iNo){
            iCount++;
        }
    }

    return iCount;
}


int main(){
    int iSize=0;
    int *p=NULL;
    int iCnt=0;
    int iRet=0;
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

    iRet=Frequency(p,iSize,iValue);

    printf("Result is %d",iRet);

    free(p);


    return 0;
}













