#include<iostream>
using namespace std;

// void sum(int a,int b){
//     int s= a+b;
//     cout<<s<<endl;
// }
// int diff(int a,int b){
//     int difference = a-b;
//     return difference;
// }
// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     return fact;

// }
bool isprime(int n){
    if (n==1){
        return false;
    }
    for(int i =2;i*i<=n;i++){
        if(n%i==0){
            return false;

        }
       

    }

    return true;
    //  cout<<"isprime:"<<n;
  
}

int main(){
   
    // sum(10,20);
    //  int s=10;
    // cout<<s<<endl;
    // int d=diff(20,10);
    // cout<<"The difference of 20 and 10 is: "<<d<<endl;
    // factorial(5);
    // factorial(6);
    // factorial(7);
    // factorial(8);
    // factorial(1);
    // factorial(2);
    // cout<<"The factorial of 5 is: "<<factorial(5)<<endl;
    // cout<<"The factorial of 6 is: "<<factorial(6)<<endl;
    // cout<<"The factorial of 7 is: "<<factorial(7)<<endl;
    // cout<<"The factorial of 8 is: "<<factorial(8)<<endl;
    // cout<<"The factorial of 1 is: "<<factorial(1)<<endl;
    // cout<<"The factorial of 2 is: "<<factorial(2)<<endl;
    isprime(2);
    cout<<"isprime:"<<isprime(3)<<endl;
    
    return 0;   
}

 
