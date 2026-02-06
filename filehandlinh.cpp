//3.file m rakhna aur check karna ki file m kya h
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main(){
ofstream x1;
x1.open("a.txt");
x1<<"Hii everyone today we are going o start CoaDing seekho";
x1.close();



getch();
}




//file m check karna ki file m kya h
/*#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main(){
ifstream fin;
char x;

fin.open("a.txt");
while(!fin.eof()){
    x=fin.get();
    cout<<x;
}
}*/

//first program file banana and file m rakhna
/*#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main(){
ofstream x;
x.open("a.txt");
x<<"CoDing Seekho";
x.close();
getch();
}
*/
