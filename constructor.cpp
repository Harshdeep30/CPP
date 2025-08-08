#include <iostream>
using namespace std;
// class demo{
//     public:
//       demo(){
//         cout<<"constructor called\n";
//     }
//    ~ demo(){
//         cout<<"destructor called";
//     }
// };
// int main(){
//     demo d;
// }
#include<iostream>
using namespace std;

class Demo{
public:
    int id;
    Demo(int n){
        id = n;
        cout << "Constructor "<< n <<" Called" << endl;
        cout << "Constructor "<< n <<" Called" << endl;
    }

    ~Demo(){
        cout << "Destructor " << id << " Destroyed" << endl;
    }
};

int main(){
    Demo d1(1),d2(2),d3(3);
return 0;
}