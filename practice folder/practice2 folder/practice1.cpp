#include <iostream>
using namespace std;
int main(){
    int n=4,m=5;

    for(int i=0; i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==0 || i==n ||j==1||j==m){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}
