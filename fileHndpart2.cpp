#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main(){
ifstream fin;
fin.open("a.txt");
char g;
g=fin.get();
cout<<fin.tellg();
fin.close();






getch();
}
