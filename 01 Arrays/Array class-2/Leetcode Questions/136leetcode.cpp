#include<iostream>
using namespace std;
int FindUniqueNumber(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[]={1,3,4,1,5,3,4};
    int size=7;
    int result = FindUniqueNumber(arr,size);
    cout<< result<<" ";
    
    return 0;
}
