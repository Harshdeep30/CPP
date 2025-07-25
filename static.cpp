#include<iostream>
using namespace std;

class Demo{
    static int count;
public:
    Demo(){
        count++;
    }

    void show(){
        cout << "Count: " << count << endl;
    }
    void create(){
        static int x=0;
        x++;
        cout<<"x: "<<x<<endl;
    }
};
int Demo::count=0;
int main(){
    Demo a;
    Demo b;
    Demo c;

    c.show();    
    c.create();
    c.create();
//     return 0;
}
