#include<iostream>
using namespace std;
void SortZeroandOne(int arr[],int size){
    int zero=0;
    int one =0;
    
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            zero++;
        }
        if(arr[i]==1){
            one++;
        }
            
        }
        // for(int i=0;i<zero;i++){
        //     arr[i]=0;
        // }
        // for(int i=zero;i<size;i++){
        //     arr[i]=1;
        // }
  // Using fill function
        fill(arr,arr+zero,0);
        fill(arr+zero,arr+size,1);
        
}

int main(){
    int arr[]={1,0,0,1,1,0,0};
    int size=7;
    SortZeroandOne(arr,size);
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
