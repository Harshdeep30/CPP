#include<iostream>
using namespace std;

void print(int n){
    if(n==0) return;
     print(n-1);
    cout << n << " ";
   
}
int fact(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n*fact(n-1);
}
int fib(int n){
    if(n<=1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}





int main(){
    // print(5);
    // cout<<fact(5);
    // cout<<fib(5);
    int n=5;
    fib(n);

    for(int i=0;i<n;i++){
        cout<<fib(i)<<" ";
    }
return 0;
}