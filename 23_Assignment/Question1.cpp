/*

Enter the number of rows and columns : 
4
4
*       *       *       #
*       *       #       *
*       #       *       *
#       *       *       *

*/

#include<iostream> 
using namespace std;

class Pattern{
    private:
    int iRow;
    int iCol;
    public:
    Pattern(int X,int Y){
        iRow=X;
        iCol=Y;
    }
    void printPattern(){
        int i=0;
        int j=0;
        for(i=1;i<=iRow;i++){
            for(j=iCol;j>=1;j--){
                if(j==i){
                    cout<<"#\t";
                }
                else{
                    cout<<"*\t";
                }
            }
            cout<<"\n";
        }
    }




};

int main(){ 
    int iValue1=0;
    int iValue2=0;

    cout<<"Enter the number of rows and columns : "<<endl;
    cin>>iValue1>>iValue2;

    Pattern *pobj=new Pattern(iValue1,iValue2);
    pobj->printPattern();



    return 0;
}
