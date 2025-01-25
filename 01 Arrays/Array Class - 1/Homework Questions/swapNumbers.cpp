#include<iostream>
using namespace std;
void SwapNumber(int &a,int &b){
    // TRy variable and addition and without variable
    a=a^b;
    b=b^a;
    a=a^b;
    cout<<"a"<<":"<<a<<", "<<"b"<<":"<<b;
}

int main(){
    
   int a=7;
   int b=8;
    SwapNumber(a,b);
    return 0;
}
