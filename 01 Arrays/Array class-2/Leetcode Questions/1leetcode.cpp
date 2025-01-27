#include <iostream>
using namespace std;

void TwoSum(int arr[], int size, int target){
    
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==target){
                cout<<i<<" "<<j<<endl;
                return;
            }
        }
    }
}

int main() {
    int arr[]={2,7,11,15};
    int size=4;
    int target=9;
    TwoSum(arr, size, target);
    
    

    return 0;
}
