#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main(){
    int num;
    cout<<"Ingrese un numero de 4 digitos:";
    cin>>num;

    cout<<num/10000<<"  ";
    num=num%10000;

    cout<<num/1000<<"  ";
    num=num%1000;

    cout<<num/100<<"  ";
    num=num%100;

    cout<<num/10<<"  ";
    num=num%10;

    cout<<num<<endl;

return 0;
}