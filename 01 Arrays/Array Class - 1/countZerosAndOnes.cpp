#include<iostream>
#include<limits.h>
using namespace std;
void CoutZeroAndOne(int arr[],int size){
    int zero = 0;
    int one = 0;
    
    for(int i=0; i<size; i++){
        if(arr[i]==0){
        zero++;}
        if(arr[i]==1){
        one++;}
    }
    cout<<"Zero"<<":"<<zero<<" ";
    cout<<"one"<<":"<<one<<":";
    
    
}
int main(){
   int arr[]={1,0,0,1,0,1,0};
   int size = 7;
 CoutZeroAndOne(arr,size);
    
    
    return 0;
}
