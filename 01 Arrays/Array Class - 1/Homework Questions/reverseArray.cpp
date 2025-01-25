#include<iostream>
#include<algorithm>
using namespace std;
// solve without sawp function ,using one more array
void ReverseArray(int arr[],int size){
    int i =0;
    int j=size-1;
    
while(i<j){
     
        swap(arr[i],arr[j]);
        i++;
        j--;
        
        
    }
    
}

int main(){
    
   int arr[]={12,25,28,29,90};
   int size = 5;
   ReverseArray(arr,size);
   
   for(int i = 0; i<size; i++){
       cout<<arr[i]<<" ";
   }
    return 0;
}
