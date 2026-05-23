#include<iostream>
using namespace std;
int num(int a, int b, int c){
    if(a>=b && a>=c){
        cout<<" a is the big number"<<endl;
        return a;
    }
    else if(b>=a && b>=c){
        cout<<" b is the big number"<<endl;
        return b;

    }
    else{
        cout <<"c is the biggest number"<<endl;
        return c;
    }
}
int main(){
    int a,b,c;
    cout<<"Enter the value of a, b and c : ";
    cin>>a>>b>>c;
    int big = num(a,b,c);
    cout<<"The biggest number is : "<<big<<endl;
    return 0;
}