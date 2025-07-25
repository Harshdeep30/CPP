#include <iostream>
using namespace std;
class box{
    public:
    int l;
    int b;
    int area(){
        return l*b;
    }
};
class Person{
    public :
    string name;
    Person(){

    }
    Person(string name){
        this->name=name;
    }
    void info(){
        cout<<name;
    }
};
class sum{
    public:
    int a;
    int b;
    int c;
    int summ=0;

    sum(){
        cout<<"enter";
    }

    sum(int a, int b,int c){
        this->a = a;
        this->b = b;
        this->c = c;
        summ = a+b+c;
    }
    sum(int a,int b){
        this->a = a;
        this->b = b;
        summ= a+b;
    }
    void details(){
        cout<<summ;
    }
};
class account{
    private:
    int balance;
    public:
    void setbalance(int b){
         balance=b;
    }
    int getbalance(){
        return balance;
    }
};
namespace info{
    string name="c++";
};
namespace a{
    int value=10;

}
namespace b{
    int value=20;
};
class car{
    public:
    void display();
};
void car::display(){
    cout<<"car class";
}
class outer{
    public:
    class inner{
        public:
        void show(){
            cout<<"inner class";
        }
    };
};
class demo{
public:
demo(){
    cout<<"constructor called";
}
};
namespace abcdefghijklmnopqrstuvwxyz{
    int value=26;
}
class bank{
    public:
        string name;int balance;int amount;int acc; int flag= 0;
        bank(string name,int acc){
            this->name=name;this->acc=acc;
            if(name=="ishwar" && acc == 250){balance=100000;}
            else if((name=="kirat" || name=="boiled_momo") && acc== 150){
                balance=10;
            }
            else{
                cout<<"username does not exits" << endl;
                flag= 1;
                return;
            }
            cout<<"d/w"<<endl;

            }
        
         void deposit(){
            if (flag)
            {
                return;
            }
                cout<<"enter amount to be deposited: ";
                cin>>amount;
                balance=balance+amount;
                cout<<"Account number: "<<acc<<endl<<"Name: "<<name<<endl<<"Balance: "<<balance<<endl; }
            void withdraw(){
                if (flag)
                {
                    return;
                }
                cout<<"enter amount to be withdrawed: ";
                cin>>amount;
                if(amount>balance){cout<<name<<" paise ne h..."<<endl;}
                else{balance=balance-amount;
                    cout<<"Account number: "<<acc<<endl<<"Name: "<<name<<endl<<"Balance: "<<balance<<endl;} }

            void show(string option){
                if (flag)
                {
                    return;
                }
               if(option=="d"){
                deposit();}
               else {withdraw();}}};
class timepass{
    private:
    int a;
    public:
    void seta(int a){
    this->a=a;
}
   int geta(){
    return a;
   }
   
    int area(){
        return a*a;
    }
    int cube(){
        return a*a*a;
    }
};

int main(){
// box b1;
        // b1.l=5;
        // b1.b=4;
        // cout << b1.area();
    //     Person p1("XYZ");
    //    p1.info();
    // sum s1(2,3,5);
    // s1.details();
    // cout << endl;
    // sum s2;
// account a;
// a.setbalance(1000);
// cout<<"balance "<<a.getbalance();
// using namespace info;
// cout<<a::value<<endl;
// cout<<b::value<<endl;
// car c;
// c.display();
// outer::inner obj;
// obj.show();
// cout<<abcdefghijklmnopqrstuvwxyz::value<<endl;
// string name;
// int id;
// cout<<"Enter your name: ";
// cin>>name;
// cout<<"Enter id: ";
// cin>>id;
// bank b2(name,id);
// string n;
// cin>>n;
// b2.show(n);
// int m;
// cin>>m;
// timepass tp;
// tp.seta(m);
// cout<<tp.area()<<endl;
// cout<<tp.cube();

// int l,b;
// cout<<"enter l & b: ";
// cin>>l>>b;
// cout<<"area: "<<l*b<<" perimeter: "<<2*(l+b);

// float n;
// cout<<"enter no.";
// cin>>n;
// if(n>=10 && n<=100){
//     cout<<"yes";
// }

// else{
//     cout<<"no";
// }


cout<<"enter ";
int a,b;
cin>>a>>b;
cout<<a<<"<-"<<b<<endl;
a=a+b;
b=a-b;
a=a-b;
cout<<a<<"->"<<b;
















return 0;



    }
