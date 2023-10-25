#include<stdio.h>

void DisplayConvert(char cValue){
   if(cValue>='a' && cValue<='z'){
    printf("%c",cValue-'a'+'A');
   }
   else if(cValue>='A' && cValue<='Z'){
    printf("%c",cValue-'A'+'a');
   }
}

int main(){
    char cValue='\0';
    printf("Enter chracter\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);


    return 0;
}








