#include<bits/stdc++.h>
using namespace std;

class A{
private :
    int a_ka_private = 10;
public :
// Friend Fun ki declaration class me hoti hai lekin defination bahar hoti hai
    friend void show(A& a);
    void show2(){
        cout<<"AAP Yaha AA Jaie !!\n";
    }
  // const means ye kabhi change nhi hoga !!
    const int x = 10;
};

void show(A& a){
    cout<<a.a_ka_private<<endl;
}

int main(){
    A a;
    show(a);
}