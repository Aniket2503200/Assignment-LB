#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iSize){
    int iCnt=0;
    int iMax=Arr[0];
    int iMin=Arr[0];

    for(iCnt=0;iCnt<iSize;iCnt++){
        if(Arr[iCnt]<iMin){
            iMin=Arr[iCnt];
        }
    }

    return iMin;
}

int main(){
    int iCount=0;
    int *ptr=NULL;
    int iCnt=0;
    int iRet=0;
    printf("Enter the number of elements you want to entered : \n");
    scanf("%d",&iCount);

    ptr=(int*)malloc(iCount*sizeof(int));


    printf("Enter the %d Values : \n",iCount);

    for(iCnt=0;iCnt<iCount;iCnt++){       
        printf("\nEnter the element no %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet=Minimum(ptr,iCount);  

    printf("Smallest element : %d\n",iRet);

    free(ptr);

    return 0;
}



