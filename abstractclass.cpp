#include<iostream>
#include<conio.h>
using namespace std;
class demo{
int x,y;
public:
    virtual void roi()=0;
    demo(){
    x=10;
    y=20;
    cout<<x+y;
    }
};
class sa : public demo{
    public:
void roi(){
cout<<"child class";
}

};
int main(){

sa s1;


}
