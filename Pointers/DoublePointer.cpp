#include <iostream>
using namespace std;
int main()
{
    int x = 7;
    int *ptr = &x;
    int **ptr1 = &ptr;
    cout << x << " " << *ptr << " " << **ptr1 << " " << &x << " " << ptr << " " << *ptr1;
}