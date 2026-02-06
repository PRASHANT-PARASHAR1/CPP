#include<iostream>
#include<conio.h>
using namespace std;
class nokia{
    public:
int mic;
int speaker;

};
class samsung:public nokia{
    public:
int sensors;
int radio;
};
class oneplus :public samsung{
int camara;
int fastcharging;


};

int main(){
oneplus s1;
s1.sensors=12;
cout<<s1.sensors;



}
