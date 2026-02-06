#include<iostream>
#include<conio.h>
using namespace std;
class student{
public:
    int x,y;
    student(){
    cout<<"copy constractor"<<endl;
    }
    student(int p,int q){
    cout<<"parameterized constractor"<<endl;
    }
student(student &z){
cout<<"copy constractor";
}
};
int main(){
student s1;
student s2(12,13);
student s3(s2);

getch();
}
/*#include<iostream>
#include<conio.h>
using namespace std;
class nokia{
int x;
int y;
public:
nokia(int p,int q){
 x=p;
 y=q;
 cout<<x<<""<<y;
}
nokia(){
cout<<"without calling";
}
};
int main(){
nokia s1(2000,20);

getch();
}
*/











/*#include<iostream>
#include<conio.h>
using namespace std;
class demo{
int x;
int y;
public:
    demo(int p,int q){

    x=p;
    y=q;


    }
    demo(int s){
        x=s;
        y=s;
    }
    void display(){
    cout<<x<<""<<y;
    }
};


int main(){
demo s1(10,11),s2(1);
s1.display();
s2.display();
getch();
}
*/
