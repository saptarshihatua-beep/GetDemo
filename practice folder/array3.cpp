#include<iostream>
using namespace std;
void printArr(int *num,int m){
    for(int i = 0;i<m;i++){

     cout<<num[i]<<",";
    }
    cout<<endl;

}
//here we do this code with spaces //
int main(){
    int arr[]={5,4,3,9,2};
    int n=sizeof(arr)/sizeof(int);
    int copyArr[n];
    for(int i=0;i<n;i++){
        int j=n-i-1;
        copyArr[i]=arr[j];
    }
    for(int i =0;i<n;i++){
        arr[i]=copyArr[i];

    }
    printArr(arr,n);
    
}
