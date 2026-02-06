#include<iostream>
#include<conio.h>
#include<map>
using namespace std;
int main(){
map<int,string>m1;
m1[100]="prashant parashar";
m1[105]="saurav";
m1[103]="chetan";
m1[109]="manish";cout<<m1[100];

m1[101]="virat";
cout<<m1[100]<<endl;
cout<<m1[105]<<endl;
cout<<m1[103]<<endl;
cout<<m1[109]<<endl;




getch();
}

//list stl(standard template library)
/*#include<iostream>
#include<conio.h>
#include<list>
using namespace std;
int main(){
list<int>l1={11,22,33,44,55,66,77};
list<int>::iterator i1=l1.begin();
while(i1!=l1.end()){
cout<<*i1<<" ";
i1++;
}
    getch();
}*/
