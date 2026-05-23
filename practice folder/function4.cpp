#include<iostream>
using namespace std;

int num(int a , int b){
    int dig1 = a*a;
    int dig2 = b*b;
    int dig3 = 2*dig1*dig2;
    int sum = dig1 + dig2 + dig3;
    return sum;
}


int main(){
    int a,b;
    cout<<"Enter the value of a and b : ";
    cin>>a>>b;
    int s= num(a,b);
    cout<<"The sum is : "<<s;
    return 0;       
}

 