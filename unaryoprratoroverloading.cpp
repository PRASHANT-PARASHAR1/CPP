
//unary oprator post increment
#include<iostream>
#include<conio.h>
using namespace std;
class unaryOver{
int x;
int y;
public:
    void setdata(int p,int q){
    x=p;
    y=q;
    }
unaryOver operator ++(){
 unaryOver z1;
 z1.x=x--;
 z1.y=y--;
 return z1;
 }
 void display(){

 cout<<x<<" "<<y<<endl;
 }
};
int main(){
unaryOver s1,s2;
s1.setdata(10,20);
s2=++s1;
s2.display();
getch();
}

//unary oprator preincrement
/*#include<iostream>
#include<conio.h>
using namespace std;
class unaryOver{
int x;
int y;
public:
    void setdata(int p,int q){
    x=p;
    y=q;
    }
unaryOver operator ++(){
 unaryOver z1;
 z1.x=++x;
 z1.y=++y;
 return z1;
 }
 void display(){

 cout<<x<<" "<<y<<endl;
 }
};
int main(){
unaryOver s1,s2;
s1.setdata(10,20);
s2=++s1;
s2.display();
getch();
}*/
