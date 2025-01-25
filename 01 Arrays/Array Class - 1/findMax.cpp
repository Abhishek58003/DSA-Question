#include<iostream>
#include<limits.h>
using namespace std;
void FindMax(int arr[], int size){
    int max = INT_MIN;
    for(int i =0; i<size; i++){
        if(arr[i]>max){
        max=arr[i];
            
        }
        
}
cout<<max;
}
int main(){
   int arr[]={12,25,7,29,28,90,97};
   int size = 7;
    FindMax(arr, size);
    
    
    return 0;
}
