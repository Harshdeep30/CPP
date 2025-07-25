// class vehicle{
//     public:
//     vehicle(){
//     cout<<"this is a vehicle"<<endl;
//     }
// };
// class car{
//     public:
//     car(){
//         cout<<"this vehicle is a car"<<endl;
//     }
// };
// class carname:public vehicle, public car{
//     public:    
//     carname(){
//         cout<<"car name is from brand MAHINDRA"<<endl;
//     }
// };
// int main(){
//      carname obj;
// }

// #include<iostream>
// using namespace std;

// class Vehicle{
// public:
//     Vehicle(){
//         cout << "This is vehicle " << endl;
//     }
// };

// class Fare{
// public:
//     Fare(){
//         cout << "Fare of Vehicle" << endl;
//     }
// };

// class Car : public Vehicle{
// public:
//     Car(){
//         cout << "This is Car" << endl;
//     }
// };

// class Bus : public Vehicle, public Fare{
// public:
//     Bus(){
//         cout << "This is  Bus" << endl;
//     }
// };

// int main(){
//     Car c;
//     Bus b;


// }




#include <iostream>
using namespace std;
class animal{
    public:
    void speak(){
        cout<<"animal speaks"<<endl;
    }

};
class Dog:public animal{
    public:
    void speak(){
        cout<<"dog barks"<<endl;
    }
};
int main(){
    Dog d;
    d.speak();
}