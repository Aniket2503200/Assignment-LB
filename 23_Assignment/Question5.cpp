/*

Enter the number of rows and columns :
5
5
1       2       3       4       5
1       2                       5
1               3               5
1                       4       5
1       2       3       4       5

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
            for(j=1;j<=iCol;j++){
                if(i==j){
                    cout<<j<<"\t";
                }
                else if(i==1 || i==iRow || j==1 || j==iCol){
                    cout<<j<<"\t";
                }
                else{
                    cout<<"\t";
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
