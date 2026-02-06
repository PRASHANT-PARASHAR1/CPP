//singal inheritance
#include<iostream>
#include<conio.h>
using namespace std;
class demo1{
public:
    demo1(int h){
    cout<<h<<endl<<"demo 1 is calling"<<endl;
    }
    int x=10;
    int y=20;

};
class demo2 : public demo1{
    public:
        demo2(int g):demo1(g){
        cout<<"demo 2 is calling"<<endl;
        }
int z=30;
};
int main(){
demo2 s1(6);

cout<<s1.x<<" "<<s1.y<<" "<<s1.z;


}
