#include<iostream> 
using namespace std;

class String{
    private:
    char *str;
    int iSize;
    public:
    String(){
        iSize=50;
        str=new char[iSize];
    }
    String(int X){
        iSize=X;
        str=new char[iSize];
    }
    ~String(){
        delete []str;
    }
    void Accept(){
        cout<<"Enter the String :\n";
        cin.getline(str,iSize);
    }
    int CountSmall(){
        int iCount=0;
        while(*str!='\0'){
            if(*str>='a' && *str<='z'){
                iCount++;
            }
            *str++;
        }
        return iCount;
    }
};

int main(){ 
    int iRet=0;
    String *sobj=new String();
    sobj->Accept();
    iRet=sobj->CountSmall();
    cout<<"Count the Small Character : "<<iRet;

    delete sobj;


    return 0;
}
