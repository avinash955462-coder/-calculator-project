#include <iostream>
using namespace std;
int main (){
    int a;
cout<<" enter the value of a ";
cin>>a;
    int b;
cout<<" enter the value of b ";
cin>>b;
char op ;
cout<<" enter the value of op ";
cin>>op;
switch(op){
    case '+' : cout<< a+b ;
            break;
    case '-' : cout<< a-b ;
            break;
    case '*' : cout<< a*b ;
             break;
    case '/' : cout<< a/b ;
            break;
    case '%' : cout<< a%b ;
            break;
}



return 0;



}