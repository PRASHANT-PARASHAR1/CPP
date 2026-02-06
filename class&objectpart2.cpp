#include<iostream>
#include<conio.h>
using namespace std;
class student{
int x;
int y;
int z;
public:
    void f1(){
    x=10;
    y=20;
    z=30;
    cout<<"addition is"<<x+y+z;
    }
    void f2(int p,int q,int r){
    cout<<p+q+r;

    }


};

int main(){
 student s1;
 s1.f1();
 s1.f2(11,22,33);




}
