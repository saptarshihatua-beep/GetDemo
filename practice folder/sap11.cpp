#include<iostream>
using namespace std;
int main(){
    float pencil;
    float pen;
    float eraser;;
    cout<<"Enter the price of pencil:";
    cin>>pencil;
    cout<<"Enter the price of pen:";    
    cin>>pen;
    cout<<"Enter the price of eraser:";
    cin>>eraser;
    float total=pencil+pen+eraser;  
    cout<<"Total price is: "<<total<<endl;
    return 0;
}