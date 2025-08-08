#include<iostream>
#include <memory>
using namespace std;

// int main(){
//     unique_ptr<int> p= make_unique<int> (20) ;
//     cout<<"*p: "<<*p;
// }


// class A {
// public:
//     A() { cout << "Constructor called" << endl; }
//     ~A() { cout << "Destructor called" << endl; }
    
// };


// int main() {
//     unique_ptr<A> ptr = make_unique<A>();
// return 0;
// }


// class Myclass{
//     public:
//     Myclass(){
//         cout<<"constructor called";
//     }
//     void display(){
//         cout<<"hello from my class";
//     }
//     ~Myclass(){
//         cout<<"destructor called";
//     }
// };


// class A {
// public:
//     A() { cout << "Constructor called" << endl; }
//     ~A() { cout << "Destructor called" << endl; }
//     void display(){
//         cout<<"display function";
//     }
    
// };

// int main(){
//     // unique_ptr<Myclass>ptr(new Myclass());
//     // ptr->display();
//     shared_ptr<A> a1=make_shared<A>();
//     shared_ptr<A> a2=a1;
//     a1->display();
//     a2->display();
//     cout<<"reference count:"<<a1.use_count()<<endl;
//     return 0;
// }


// class A{

//     int a;
//     int b;
//    public:
//    A(int x,int y):a{x},b{y}{};
//      void display(){
//     string enter;
//     cin>>enter;
    // cin>>a>>b;

//     if(enter=="+"){
//         cout<<add();
//     }
//     else if(enter=="-"){
//         cout<<subtract();
//     }
//     else if(enter=="/"){
//         cout<<divide();
//     }
//     else if(enter=="*"){
//         cout<<multiply();
//     }

    
// }

//     int add(){
//         return a+b;
//     }
//     int multiply(){
//         return a*b;
//     }
//     int subtract(){
//         return a-b;
//     }
//     int divide(){
//         return a/b;
//     }
   
// };
// int main(){
//     unique_ptr<A> ptr(new A(10,2));
//    ptr->display();
// }




// int* unsafeLeak(){
//     int* p = new int(10);
//     return p;
// }

// int main(){
//     int *ptr = unsafeLeak();
//     cout << *ptr << endl;
// return 0;
// }


// #include<iostream>
// #include<memory>
// using namespace std;

// unique_ptr<int> safeLeak(){
//     unique_ptr<int> p = make_unique<int>(10);
//     return p;
// }

// int main(){
//     unique_ptr<int> ptr = safeLeak();
//     cout << *ptr << endl;
// return 0;
// }

// #include<iostream>
// #include<memory>
// using namespace std;
 
// unique_ptr<int> fix(){
//     return make_unique<int>(10);
// }

// int main(){
//     unique_ptr<int> ptr = fix();
//     cout << *ptr << endl;
// return 0;
// }


// class Car{
//     string name;
//     public:
//     Car(){
        
//         cout<<"constructor"<<endl;
//     }
//     void setdata(string name){
//         this->name=name;
//     }

//     void display(){
//         cout<<name<<endl;
//     }
//     ~Car(){
//         cout<<"deconstructor";
//     }
// };

// int main(){
    // unique_ptr<Car> car1=make_unique<Car>("fortuner");
    // car1->display();

//     shared_ptr<Car> car2=make_shared<Car>();
//     car2->setdata("defender");
//     shared_ptr<Car> car3=car2;
//     cout<<"reference count: "<<car2.use_count()<<endl;
//     car3->display();
// }


// class counter{
//     static int count;
//     public:
//      counter(){
//         count++;
//     }
//     void display(){
//         cout<<count;
//     }
    
// };
// int counter::count=0;
// int main(){
//     counter c1,c2,c3,c4;
//     c1.display();
// }

// class book{
//     string name;
//     string author;
//     public:
//     book(string name,string author){
//         this->name=name;
//         this->author=author;
//     }
//      void display()const{
//         cout<<name<<endl;
//         cout<<author;

//     }
// };
// int main(){
//     const book b("kirat","kirat");
//     b.display();

// }


class box{
    int l;
    int b;
    int h;
    int vol(){
        return l*b*h;
    }
    friend class printer;
    public:
    box(){}
    box(int l,int b,int h){
        this->l=l;
        this->b=b;
        this->h=h;
    }
    
};
class printer{
    public:
    void display(box b){
        cout<<b.l<<" "<<b.b<<" "<<b.h;
        cout<<b.vol();

    }
};


int main(){
    printer p;
    box c(10,5,2);
    p.display(c);
}
