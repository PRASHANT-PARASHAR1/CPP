#include<iostream>
#include<conio.h>
using namespace std;
template <class z,class l>
class demo{
    z x,y;
    l n;
public:
    void fun1(z p,z q,l r){
    x=p;
    y=q;
    n=r;
    }
void display(){
cout<<x<<" "<<y<<" "<<n;
}
};
int main(){
demo<int,double>d1;
d1.fun1(12.8,18.9,13);
d1.display();

getch();
}

