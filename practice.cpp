#include <iostream>
using namespace std;
// #include<iostream>
// using namespace std;

// namespace example{
//     int sample = 50;
//     int add(int a, int b){
//         return a+b;
//     }
// }

// using namespace example;
// int main(){
//     cout << example::sample << endl;
//     cout << example::add(2,4) << endl;

    // or by adding "using namespace example" above
    
    // cout << sample << endl;
    // cout << add(2,4) << endl;

// }


// int main(){
//     int a;
//     cin>>a;
//     int count=0;
//     while(a>0){
//         if(a & 1 == 1){
//             count++;
//         }
//         a=a>>1;
//     }
//     cout<<count;
// }


// bool power(int a){
//     return (a>0) && (a & (a-1))==0;
// }
// int main(){
//     int a;
//     cin>>a;
//     power(a);
//     if(power(a)){
//         cout<<"yes";
//     }
//     else{
//         cout<<"no";
//     }

// }


// int main(){
//     int a;
//     cin>>a;
//     int rev=0;
//     int rem;
//     while(a>0){
//         rem=a%10;
//         rev=rev*10+rem;
//         a=a/10;
//     }
//     cout<<rev;
// }


// int main(){
//     int n;
//     cin>>n;
//     int a=0;
//     int b=1;
//     int next;
    
//    for(int i=0;i<n;i++){
//         cout<<a<<" ";
//         next=a+b;
//         a=b;
//         b=next;
//     }

// }


// int fac(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     else{
//         return n * fac(n-1);
//     }
// }
// int main(){
//     int a;
//     cin>>a;
//     cout<<fac(a);
// }


// class sum{
//     public:
//    int m,n;
//     int sum1(int m,int n){
//         cout<< m+n;
//     }
// };
// int main(){
//    sum s1;
//    int a,b;
//    cin>>a>>b;
//    s1.sum1(a,b);
    
// }

// class reactangle{
//     private:
//     int l;
//     int b;
//     public:
//     void info(){
//         cin>>l;
//         cin>>b;
//     }
//     int area(){
//         return l*b;
//     }
// };
// int main(){
//     reactangle r;
//     r.info();
//     cout<<r.area();
// }


// class circle{
//     public:
// int r;
//     void info(){
//         cin>>r;
//     }
//     float area(){
//         return 3.14*r*r;
//     }
// };
// int main(){
//     circle c;
//     c.info();
//     cout<<c.area();
// }


class rectangle{
    private:
    int l,b;
    public:
    // void setinfo(int l,int b){
    //     this->l=l;
    //     this->b=b;
    // }
    
    // rectangle(){
    //     cin>>l;

    //     cin>>b;
    // }
    int area(){
        return l*b;
    }
    
};
int main(){
    rectangle r;
    
    cout<<r.area();
}