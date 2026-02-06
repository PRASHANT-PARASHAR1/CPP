#include<iostream>
#include<conio.h>
using namespace std;
class nokia{
    public:
int mic;
int speaker;
};
class samsung{
    public:
    int sensors;
    int radio;

};
class oneplus : public nokia,samsung{
public:
    int faceid;
    int fastcharging;

};

int main(){
oneplus s1;
s1.radio=100;
cout<<s1.radio;


}
