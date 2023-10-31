#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength){
    int iCnt=0;
    int iEvenCount=0;
    int iOddCount=0;
    for(iCnt=0;iCnt<iLength;iCnt++){
        if((Arr[iCnt]%2)==0){
            iEvenCount++;
        }
        if((Arr[iCnt]%2)!=0){
            iOddCount++;
        }
    }

    return iEvenCount-iOddCount;
}


int main(){
    int iSize=0;
    int *p=NULL;
    int iCnt=0;
    int iRet=0;

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

    iRet=Frequency(p,iSize);

    printf("Result is %d",iRet);

    free(p);




    return 0;
}













