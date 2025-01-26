#include<iostream>
using namespace std;

void CheckTwoSum(int arr[],int size, int target){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<","<<arr[j]<<endl;
                
            }
            
        }
    }
    
}

int main(){
    int arr[]={15,20,30,5,50};
    int size=5;
    int target = 35;
    CheckTwoSum(arr,size,target);
    // if(ans==true){
    //     cout<<"target found";
    // }
    // else{
    //     cout<<"target not found";
    // }
    return 0;
}
