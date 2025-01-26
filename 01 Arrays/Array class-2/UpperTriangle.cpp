#include<iostream>
using namespace std;

void NestedLoop2(int arr[],int size){
    for(int i=1;i<size;i++){
        for(int j=0;j<i;j++){
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
