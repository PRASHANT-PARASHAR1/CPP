#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
    public:

    static int x;
    private:
    static int z;
    public:
static void f1(){
z=20;
x=990;
cout<<z;
}
};
int demo::z;
int main(){
demo x1;
x1.f1();

cout<<demo::x;

}
