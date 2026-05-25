#include<bits/stdc++.h>
using namespace std;

int main(){
   int a;
   cout<< "Insert First Number : ";
   cin >> a;
   char ob;
   cout<< "Insert Operator Number : ";
   cin >> ob;
   int b;
   cout<< "Insert Second Number : ";
   cin >> b;
   if(ob == '+') cout<< a+b;
   else if(ob == '-') cout << a-b;
   else if(ob == '*') cout << a*b;
   else if(ob == '/') cout << a/b;
}