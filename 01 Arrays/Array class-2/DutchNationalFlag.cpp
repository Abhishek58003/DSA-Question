// sort 0's, 1's and 2's also called DutchNationalFlag problem
#include<bits/stdc++.h>
using namespace std;

void sort(int arr[], int n) {
    int zero=0;
    int one=0;
    int two=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]==0)
            zero++;
        
        else if(arr[i]==1)
            one++;
        
        else
            two++;
        }
        for (int i = 0; i < zero; i++)
        arr[i] = 0;

    // // Place all the 1s
    for (int i = zero; i < n-two; i++)
    arr[i] = 1;

    // // Place all the 2s
    for (int i =n-two; i < n; i++)
        arr[i] = 2;
    
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

    
   int main(){
    int arr[]={0,1,0,0,2,2};
    int n=6;
    sort(arr,n);
    
    
    return 0;
}
