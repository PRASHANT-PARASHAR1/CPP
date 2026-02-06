#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
int main()
{
 vector<char>v3(4,'T');
 v3.push_back('v');
 vector<char>::iterator i1=v3.begin();
 v3.insert(i1+4,'M');
 while(i1!=v3.end()){
    cout<<*i1<<" ";
    i1++;
 }

    getch();
}




