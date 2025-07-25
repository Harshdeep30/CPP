    #include<iostream>
using namespace std;

// class Demo{
//     static int count;
// public:
//     Demo(){
//         count++;
//     }

//     void show(){
//         cout << "Count: " << count << endl;
//     }
// };

// class demo{
//     int a;
//     public:
//     demo(int x): a(x){}
//     void show()const{
//         cout<<"value: "<<a<<endl;
//     }    
// };

// int Demo::count = 0;

// int main(){
//     Demo a;
//     Demo b;
//     Demo c;

//     a.show();
//     return 0;
// }

// class demo{
//     int a;
//     public:
//     demo(int x): a(x){}
//     void show()const{
//         cout<<"value: "<<a<<endl;
//     }    
// };      
// int main(){
//     demo a(10);
//     a.show();

// }



class demo{
    int a=10;
    friend void show(demo);
};
void show(demo d){
    cout<<"value:" <<d.a<<endl;
};
int main(){
    demo d;
    show(d);
}