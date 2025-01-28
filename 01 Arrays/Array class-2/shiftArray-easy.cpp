#include<iostream>
using namespace std;
void ShiftArray(int arr[],int size,int n){
    int temp[size];
    for(int i=0;i<size;i++){
        temp[(i+n)%size]=arr[i];
    }
    cout<<"Array after rotating:"<<endl;
    for(int i=0;i<size;i++){
        cout<<temp[i]<<" ";
    }
}


int main(){
    int arr[]={10,20,30,40,50,60};
    int size=6;
    int n=14;
    ShiftArray(arr,size, n);
    
    
    return 0;
}
