/*

Enter number of rows and columns : 
4
4
*       *       *       *
*       *       *
*       *
*

*/
#include<iostream> 
using namespace std;

class Pattern{
    private:
    int iRow;
    int iColumn;
    public:
    Pattern(int X,int Y){
        iRow=X;
        iColumn=Y;
    }

    void printPattern(){
        int i;
        int j;
        for(i=1;i<=iRow;i++){
            for(j=1;j<=iColumn;j++){
                if(i==j ||i<j){
                    cout<<"*\t";
                }
            }
            cout<<endl;
        }
    }

};

int main(){ 
    int iValue1=0;
    int iValue2=0;

    cout<<"Enter number of rows and columns : \n";
    cin>>iValue1>>iValue2;

    Pattern *pobj=new Pattern(iValue1,iValue2);

    pobj->printPattern();

    delete pobj;



    return 0;
}
