#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a three digit numbers:"<<endl;
    cin>>n;
    int num=n;
    int dig1 = num%10;
    num=num/10;
    int dig2 = num%10;
    num=num/10;
    int dig3 = num;
    int sum = dig1 * dig1 * dig1 + dig2 * dig2 * dig2 + dig3 * dig3 * dig3;
    if(sum == n){
        cout<<n<<"The number is an anrmstrong number."<<endl;
    }else{
        cout<<n<<"The number is not an armstrong number."<<endl;
    }
    return 0;
}