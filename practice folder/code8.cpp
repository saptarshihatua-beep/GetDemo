#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter terms of number:"<<endl;
    cin>>n;
    for(int i = 1; i<=n;i++){
        cout<<i;
        for(int j =1; j <=n-2;j++){
            if (i==1 || i==n){
                cout<<i;
            }
            else{
                cout<<" ";
            }
        }
        cout<<i<<endl;

        
        
    }
    return 0;

}