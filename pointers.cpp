#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    // int b=8;
    int *ptr;
    ptr = &a;
    cout << a << " " << *ptr << " " << &a << "" << ptr << " ";
    int **ptr1;
    ptr1 = &ptr;
    cout << *ptr1 << " " << ptr1;
}
