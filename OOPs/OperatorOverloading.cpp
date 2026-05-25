#include<bits/stdc++.h>
using namespace std;

class Fraction{
public :
    int num;
    int den;

    void display(){
        cout<<num<<"/"<<den<<endl;
    }

    Fraction(int num,int den){
        this->num = num;
        this->den = den;
    }

    Fraction operator +(Fraction f){    
        int Newnum = num*f.den + den*f.num;
        int Newden = den*f.den;
        Fraction ans(Newnum,Newden);
        return fans(ans);
    }

    Fraction operator -(Fraction f){
        int Newnum = num*f.den - den*f.num;
        int Newden = den*f.den;
        Fraction ans(Newnum,Newden);
        return fans(ans);
    }

    Fraction operator *(Fraction f){
        int Newnum = num*f.num;
        int Newden = den*f.den;
        Fraction ans(Newnum,Newden);
        return fans(ans);
    }

    Fraction fans(Fraction f){
        int hcf = 1;
        int a = abs(f.num);
        int b = abs(f.den);
        for(int i=min(a,b);i>=1;i--)  {
            if(a%i==0 && b%i==0){
                hcf = i;
                break;
            }
        }
        f.num /= hcf;
        f.den /= hcf;
        Fraction ans(f.num,f.den);
        return ans;
    }
};
int main(){
    Fraction f1(1,12);
    Fraction f2(1,6);
    Fraction f3 = f1 - f2;
    f3.display();
}