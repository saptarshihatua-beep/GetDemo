#include<iostream>
using namespace std;
void pointArr(int nums[], int n){
    // cout<<sizeof(nums)<<endl;//here the pointer is passed to the function and the size of the pointer is printed which is 8 bytes in 64 bit system and 4 bytes in 32 bit system
    // int n = sizeof(nums)/sizeof(int);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ,";    
    }
    cout<<endl;
    // cout<<sizeof(nums)<<endl;

}
int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    pointArr(arr, n);
    cout<<"array size = "<<sizeof(arr)<<endl;
    return 0;

}