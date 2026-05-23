#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number"<<endl;
    cin>>n;
   int num=n;
   int cubesum=0;
    while(num>0){
        int lastdigit=num%10;
        cubesum=cubesum+(lastdigit*lastdigit*lastdigit);
        num=num/10;
    }
    if(cubesum==n){
        cout<<n<<" is an armstrong number"<<endl;
    }
    else{
        cout<<n<<" is not an armstrong number"<<endl;
    }
    // cout<<"The sum of cubes of digits of "<<n<<" is "<<cubesum<<endl;
    return 0;
}

    
