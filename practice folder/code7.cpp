#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number of terms:"<<endl;
    cin>>n;
    for( int i=2;i<=n;i++){
        int curr=i;
        bool isprime=true;
        for(int j=2;j*j<=i;j++){
        if( curr%j==0) {
            isprime=false;

        }
    }
    
    if(isprime){
        cout<<curr<<" ";
    }

}
cout<< endl;
    return 0;
}   