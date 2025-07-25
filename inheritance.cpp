#include <iostream>
using namespace std;


// class person{
//     public:
//     string name;
//     int age;
// };
// class employee:public person{
//     public:
//         int employe_id;
// };
// class manager:public employee{
//     public:
//     string department_name;

//     manager(string name,int age,int employe_id,string department_name){
//         this->name=name;
//         this->age=age;
//         this->employe_id=employe_id;
//         this->department_name=department_name;
//     }
//     void display(){
//         cout<<"Name: "<<name<<" Age: "<<age<<" Employee id: "<<employe_id<<" Department name: "<<department_name;
//     }

// };
// int main(){
//     string name,department;
//     int age,id;
//    getline(cin,name);
//    cin>>age,id;
//    cin.ignore;
//    getline(cin,department);

//     manager m(name,age,id,department);
//     m.display();

// }


// #include <iostream>
// using namespace std;
// class animal{
//     public:
//     void speak(){
//         cout<<"animal speaks"<<endl;
//     }

// };
// class Dog:public animal{
//     public:
//     void speak(){
//         cout<<"dog barks"<<endl;
//     }
// };
// int main(){
//     Dog d;
//     d.speak();
// }

// #include <iostream>
// using namespace std;

// class Base {
// public:
//     Base() { cout << "Base constructor\n"; }
//     virtual void show() { cout << "Base show\n"; }
// };

// class Derived : public Base {
// public:
//     Derived() { cout << "Derived constructor\n"; }
//     void show() override { cout << "Derived show\n"; }
// };

// int main() {
//     Base* ptr = new Derived();
//     ptr->show();
//     delete ptr;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class a{
//     public:
//     void showa(){
//         cout<<"class a\n";
//     }
// };
// class b: public a{
//     public:
//     void showb(){
//         cout<<"class b\n";
//     }


// };
// class c: public b{
// public:
//     void showc(){
//         cout<<"class c\n";
//     }
// };
// int main(){
//     c obj;
//     obj.showa();
//     obj.showb();
//     obj.showc();
// }

// #include <iostream>
// using namespace std;
// class a{
//     public:
//     void msga(){
//         cout<<"Class A ";
//     }
// };
// class b{
//     public:
//     void msgb(){
//         cout<<"Class B"<<endl;
//     }
// };
// class c: public a,public b{
//     public:
//     void msgc(){
//         cout<<"Class C "<<endl;
//     }
// };
// int main(){
//     c s;
//     s.msga();
//     s.msgb();
//     s.msgc();

// return 0;
// }


// #include <iostream>
// using namespace std;
// class base {
//     public:
//     int n;
//     void printN(){
//         cout<<n<<endl;
//     }
// };
// class derived: public base{
//     public:
//     void func(){
//         n=22;
//     }
// };
// int main(){
//     derived d;
//     d.func();
//     d.printN();
// }


//  #include <iostream>
//  using namespace std;

// class parent{
//     public:
//     int id_p;
//     parent(int x=22): id_p(x){}
//     void printID_P(){
//         cout<<"base ID: "<<id_p<<endl;
//     }
// };
// class child:public parent{
//     public:
//     int id_c;
//     child(int x=22): id_c(x){}
//     void printID_C(){
//         cout<<"child id: "<<id_c<<endl;

//     }
// };
// int main(){
//     child a;
//     a.printID_P();
//     a.printID_C();
// }


// class vehicle{
//     public:
//     vehicle(){
//         cout<<"this is a vehicle"<<endl;

//     }
// };
// class car: public vehicle{
//     public:
//     car(){
//         cout<<"this vehicle is a car"<<endl;
//     }
// };
// int main(){
//     car c;
    
// }