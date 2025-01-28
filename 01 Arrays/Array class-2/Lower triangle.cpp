#include<iostream>
using namespace std;

void NestedLoop2(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            cout<<arr[i]<<", "<<arr[j]<<endl;
            
        }
    }
}

int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    NestedLoop2(arr,size);
    
    return 0;
}
