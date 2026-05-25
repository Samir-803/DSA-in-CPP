#include<bits/stdc++.h>
using namespace std;

class Book{
    public :
    string name;
    int price;
    int page;

    int countbooks(int p){
        if(price<p) return 1;
        else return 0;
    }

    bool bookpresent(string book){
        if(name == book) return true;
        else return false;
    }
};
int main(){
   Book harryporter;
   harryporter.name = "Harry Porter";
   harryporter.page = 500;
   harryporter.price = 100;
   cout<<harryporter.countbooks(1001)<<endl;
   cout<<harryporter.bookpresent("Harry Morter");
}