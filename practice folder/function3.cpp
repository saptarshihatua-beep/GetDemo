#include<iostream>
using namespace std;
int reverse(int n){
    int y = 0;
    while(n>0){
        int rev=n%10;
        y=y*10 +rev;
        n=n/10;
        
    }
    return y;
}
bool ispalindrome(int num){
    // int n;
    if(num==reverse(num)){
        return true;
    }

    return false;
}
int main(){
    int x;
    cout<<"enter a number:";
    cin>>x;
    cout<< "Is the number a palindrome? " << ispalindrome(x) << endl;
    return 0;

}
