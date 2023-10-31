#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[],int iLength){
    int iCnt=0;

        printf("Elements divisible by 5 And Even number: \n");

    for(iCnt=0;iCnt<iLength;iCnt++){
        if((Arr[iCnt]%2)==0 && (Arr[iCnt]%5)==0){
            printf("%d\t",Arr[iCnt]);
        }
    }

}


int main(){
    int iSize=0;
    int *p=NULL;
    int iCnt=0;

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

    Display(p,iSize);

    free(p);




    return 0;
}













