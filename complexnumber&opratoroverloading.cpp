#include<iostream>
#include<conio.h>
using namespace std;
class demo{
int x;
int y;
public:
    setdata(int p,int q){
    x=p;
    y=q;
    }
   demo add(demo g1){
        demo t1;
   t1.x=x+g1.x;
   t1.y=y+g1.y;
   return t1;
    }
    void display(){
    cout<<x<<"+"<<y<<"i"<<endl;
    }
};
int main(){
demo d1,d2,d3;
d1.setdata(100,200);
d2.setdata(50,60);
d3=d1.add(d2);
d3.display();
getch();
}











//substract complex number
/*#include<iostream>
#include<conio.h>
using namespace std;
class demo{
int x;
int y;
public:
    setdata(int p,int q){
    x=p;
    y=q;
    }
   demo sub(demo g1){
        demo t1;
   t1.x=x-g1.x;
   t1.y=y-g1.y;
   return t1;
    }
    void display(){
    cout<<x<<"-"<<y<<"i"<<endl;
    }
};
int main(){
demo d1,d2,d3;
d1.setdata(100,200);
d2.setdata(50,60);
d3=d1.sub(d2);
d3.display();
getch();
}*/
