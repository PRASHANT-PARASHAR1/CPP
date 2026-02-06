//class template
#include<iostream>
#include<conio.h>
using namespace std;
template <class z>
class demo{
z x,y;
public:
    void f1(z p,z q){
    x=p;
    y=q;
    }
void display(){
cout<<x<<" "<<y;
}
};
int main(){
demo<int>d1;
d1.f1(10.0,20.9);
d1.display();
getch();
}


//function template
/*#include<iostream>
#include<conio.h>
using namespace std;
template<class w>
void add(w p,w o){


cout<<p<<" "<<o;
}

int main(){

add("prashant","parashar");

}*/
