#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[],int iLength,int iNo){
    int iCnt=0;

    for(iCnt=0;iCnt<iLength;iCnt++){
        if((Arr[iCnt])==iNo){
            return iCnt;
        }
    }

    return -1;
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

    iRet=FirstOcc(p,iSize,iValue);

    if(iRet==-1){
        printf("There is no such number");
    }
    else{
        printf("First occurrence of number is %d",iRet);
    }

    

    free(p);




    return 0;
}













