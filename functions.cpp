// #include<iostream>
// using namespace std;

// void modify(int x){
//     x += 50;
// }

// int main(){
//     int x = 5;
//     modify(x);
//     cout << x << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int sum(int a, int b){
//     return a+b;
// }

// int main(){
//     int a, b;
//     cout << "Enter A: ";
//     cin >> a;

//     cout << "Enter B: ";
//     cin >> b;

//     cout <<"Sum of " << a << " + " << b << " = " << sum(a,b) << endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// void modify(int& x){
//     x += 20;
// }

// int main(){
//     int x = 5;
//     modify(x);
//     cout << x << endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// void msg(){
//     cout << "Hello";
// }

// int main(){
//     msg();
//     return 0;
// }


// #include<iostream>
// using namespace std;

// void modify(int* x){
//     *x += 10;
// }

// int main(){
//     int x = 5;
//     modify(&x);
//     cout << x << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int add_num(int, int);

// int main(){
// cout<<add_num(10,5);
// }

// int add_num(int a,int b){
// return a+b;
// } 



//return by refernece
// #include <iostream>
// using namespace std;
// int& getref(int &x){
//     return x;
// }
// int main(){
//     int x=10;
//     getref(x)=20;
//     cout << "x: " << x << endl; 
// return 0;
// }


// #include <iostream>
// using namespace std;
// int sum(int a,int b,int c,int d){
//     return a+b+c+d;
// }
// double sum(double a,double b){
//     return a+b;
// }
// int sum(int a,int b,int c){
//     return a-b-c;
// }
// int sum(int a,int b){
//     return a/b;
// }
// int main(){
//     cout<<sum(5,4,6,3);
// }


// #include <iostream>
// using namespace std;
// int main(){
//     // int x=10;
//     auto show=[](int x,int y)->int{
//        return x+y;
//     };
//     cout<<show(10,6);
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int x=10;
//     auto show=[x]()mutable{x=25;
//        cout<<x;
//     };
//     show();
    
// }


// #include<iostream>
// using namespace std;
// int& getRef(int &x) {
// return x;
// }
// int main() {
// int a = 10;
// getRef(a) = 20;
// cout << a; /
// return 0;
// }




#include <iostream>
using namespace std;
#include <functional>
int main(){
// auto  ms=[](){
//     cout<<"message";
// };
// ms();
// cout<<"Sum is: "<<[](int a, int b){return a+b;}(2,3)<<endl;
// auto add=[](int a, int b){return a+b;}(2,3);
// cout<<"Sum is: "<<add<<endl;
// function<int(int,int)> add = [](int a, int b){return a+b;};
//     cout << "Sum is: " << add(6,6);
     int x=4, y=3;
     auto mul = [x,y](){return x*y;};
     cout << "MUL IS: "<<mul();
}
