#include<iostream>
#include<limits.h>
using namespace std;
bool TargetElement(int arr[],int size){
    int targetelement=89;
    for(int i=0;i<size;i++){
        if(arr[i]==targetelement){
            return true;
        }
    
    }
    return  false;
    
}
int main(){
   int arr[]={12,13,15,16,19,18,79};
   int size = 7;
 cout<<TargetElement(arr,size);
    
    
    return 0;
}
