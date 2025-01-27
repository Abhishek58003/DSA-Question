#include <iostream>
using namespace std;

void ThreeSum(int arr[], int size, int target){
    
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(arr[i]+arr[j]+arr[k]==target){
                cout<<i<<" "<<j<<" "<< k<<endl;
                return;
            }
            
                
            }
        }
    }
}

int main() {
    int arr[]={2,7,11,15};
    int size=4;
    int target=24;
    ThreeSum(arr, size, target);
    
    

    return 0;
}
