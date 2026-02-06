#include<iostream>
#include<conio.h>
using namespace std;
class nokia{
public:
int mic;
int music;
};
class vivo: public nokia{
int fastcharging;
int battery;
};
class samsung :public nokia{
    public:
int fiveG;
int ram256;

};


int main(){

samsung s1;
s1.music=100;
cout<<s1.music;
}
