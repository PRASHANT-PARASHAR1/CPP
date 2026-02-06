//friend function part 1  private member access by using friend function
/*#include<iostream>
#include<conio.h>
using namespace std;
class demo{
int x,y;
friend void prashant();
};
void prashant()
{
 demo d1;
 d1.x=10;
 d1.y=20;
 cout<<d1.x<<" "<<d1.y;
}
int main(){
prashant();
getch();
}*/


//friend function part 2

#include<iostream>
#include<conio.h>
using namespace std;
class demo{
int x,y;
public:
void setdata(int p,int q){
x=p;
y=q;
}

void display(){
cout<<x<<" "<<y;

}
friend demo operator +(demo o1,demo o2);

};
demo operator +(demo o1,demo o2){
    demo t1;
   t1.x=o1.x+o2.x;
   t1.y=o1.y+o2.y;
return t1;
}
int main(){
demo d1,d2,d3;
d1.setdata(10,20);
d2.setdata(7,9);
d3=d1+d2;
d3.display();
getch();
}
















