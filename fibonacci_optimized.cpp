# include <iostream>
using namespace std;
int DAT[1001];
int fib(int n){
    if(n==1 || n==2){
        return DAT[n] = n-1 ;
    }
    else{
        if(DAT[n]==0){
            DAT[n] = fib(n-1) + fib(n-2);}
    }
    return DAT[n];
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<fib(i)<<" ";
    }
    return 0;
}
// TC: O(2^n) --> O(n)
// SC: O(n) --> O(n)