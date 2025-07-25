#include<iostream>
using namespace std;

struct Student{
    double m1=0;
    double m2=0;
    double m3=0;
    double m4=0;

    double tot=0;
    double avg=0;
};

struct employee{
    int id=0;
    string name;
    string designation;
    double salary=0;
    double da=0;
    double gross=0;
    double hra=0;
};

// void studentdata(){
//     Student s[3];

//     for(int i=0; i<3; i++){
//         cout << "Details for Student " << i+1 << ": " << endl;
//         cout << "Subject 1 Marks: ";
//         cin >> s[i].m1;
//         s[i].tot += s[i].m1;
//         cout << "Subject 2 Marks: ";
//         cin >> s[i].m2;
//         s[i].tot += s[i].m2;
//         cout << "Subject 3 Marks: ";
//         cin >> s[i].m3;
//         s[i].tot += s[i].m3;
//         cout << "Subject 4 Marks: ";
//         cin >> s[i].m4;
//         s[i].tot += s[i].m4;
//     }

//     for(int i=0; i<3; i++){
//         cout << endl;
//         cout << "Total Marks of Student " << i+1 << ": " << s[i].tot << endl;
//         cout << "Average of Student " << i+1 << ": ";
//         s[i].avg = s[i].tot/4;
//         cout << s[i].avg;

//         cout << "\nGrade of Student " << i+1 << ": ";
//         if(s[i].avg >= 90){
//             cout << "A";
//         } else if(s[i].avg >= 80 && s[i].avg < 90){
//             cout << "B";
//         } else if(s[i].avg >= 70 && s[i].avg < 80){
//             cout << "C";
//         } else if(s[i].avg >= 60 && s[i].avg < 70){
//             cout << "D";
//         } else{
//             cout << "F";
//         }

//         cout << endl;
//     }
// }

// void employee_data(){ 
//  employee e[5];
// for(int i=0;i<5;i++){
//     cout<<"enter name of employee "<<i+1<<endl;
//     cin>>e[i].name;
//     cout<<"enter id of employee "<<i+1<<endl;
//     cin>>e[i].id;
//     cout<<"enter salary of employee "<<i+1<<endl;
//     cin>>e[i].salary;
//     cout<<"enter name of designation "<< i+1 << endl;
//     cin>>e[i].designation;
//     e[i].da=0.05*e[i].salary;
//     e[i].hra=0.08*e[i].salary;
//     e[i].gross=e[i].salary+  e[i].da + e[i].hra;
// }

// cout<<"ID \tName \tdes \tDA \tHRA \tGross salary"<<endl;
// for(int i=0;i<5;i++){
//     cout<< e[i].id<<"\t"<< e[i].name << "\t"<<e[i].designation << "\t"<< e[i].da << "\t" << e[i].hra << "\t" << e[i].gross<<  endl;
// }
// }

struct tax{
     int id=0;
    string name;
    string designation;
    double annual_salary=0;
    double tax=0;
};

void employee_tax(){
    int n;
    cout<<"enter no. of employees";
    cin>>n;

    tax etax[n];
    for(int i=0;i<n;i++){
        cout<<"Enter employee id of" << i+1 <<": " <<endl;
        cin>>etax[i].id;

         cout<<"Enter employee name of" << i+1 <<": " <<endl;
        cin>>etax[i].name;

         cout<<"Enter employee designation of" << i+1 <<": " <<endl;
        cin>>etax[i].designation;

         cout<<"Enter employee salary of" << i+1 <<": " <<endl;
        cin>>etax[i].annual_salary;

        if(etax[i].annual_salary<=1200000){
            etax[i].tax=0;
        }
        else if(etax[i].annual_salary<1200000 && etax[i].annual_salary>=1500000){
            etax[i].tax=(etax[i].annual_salary-1200000)* 0.05;
        }
        else if(etax[i].annual_salary>1500000 && etax[i].annual_salary<=2000000){
            etax[i].tax=(etax[i].annual_salary-1500000)*0.10 + (etax[i].annual_salary-1200000)* 0.05;
                }
        else{
            etax[i].tax=((etax[i].annual_salary-1500000)*0.10 + (etax[i].annual_salary-1200000)* 0.05 + (etax[i].annual_salary-2000000)*0.15);
        }
    }
    for(int i=0;i<n;i++){
        cout<<etax[i].tax<<endl;
    }


}

int main(){
    
employee_tax();



return 0;
}

