#include<iostream>
using namespace std;

void ExtremePrinting(int arr[],int size){
    int i = 0;
    int j = size-1;
    while(i<=j){
        if(i==j){
            cout<<arr[i]<<":";
            break;
        }
        else { cout<<arr[i]<<":";
        i++;
        cout<<arr[j]<<":";
        j--;
            
        }
        
        }
    
}

int main(){
    
   int arr[]={12,24,26,79,37};
   int size=5;
    ExtremePrinting(arr,size);
    
    
    return 0;
}
