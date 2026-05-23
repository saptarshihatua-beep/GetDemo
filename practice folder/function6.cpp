#include<iostream>
using namespace std;
char ch(char ch){
    if(ch=='z'){
        return 'a';
    }
    else {
        return ch + 1;
    }
    
  
}
int main(){
    char h;
    // cout<<"Enter a character : "<<endl;
    cin>>h;

    cout<<"The next character is : "<<ch(h)<<endl;
    return 0;

}