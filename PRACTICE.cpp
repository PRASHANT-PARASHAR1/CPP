#include<iostream>
#include<conio.h>
#include<tuple>
using namespace std;
int main()
{
    tuple<int,float,string,int>t1;
    t1=make_tuple(5,34.9,"prashant",8);
    cout<<get<0>(t1)<<endl;
      cout<<get<1>(t1)<<endl;
        cout<<get<2>(t1)<<endl;
          cout<<get<3>(t1)<<endl;

    getch();
}
