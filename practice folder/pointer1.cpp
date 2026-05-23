#include <iostream>
using namespace std;
void multipleBy2(int &a ,int &b,int &c){
    a=2;
    b=2;
    c=2;
    a = a*2;
    b = b*2;
    c = c*2;
     cout<<a <<"\n"<<b<<" \n"<<c<<"\n";
     
}

int main(){
    int x =1, y = 2, z = 3;
    multipleBy2(x,y,z);
    cout<<x <<"\n"<<y<<" \n"<<z<<"\n";
    return 0;
  }