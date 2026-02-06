#include<iostream>
#include<conio.h>
#include<array>
using namespace std;
int main()
{
    array<string,6>a1;
a1.fill("AAA");
int i;
for(i=0;i<a1.size();i++){
        cout<<a1[i]<<endl;
}



getch();
}
