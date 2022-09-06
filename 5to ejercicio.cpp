#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
int num1, num2;
cout<<"Escriba 2 numeros:";
cin>>num1>>num2;

if(num1%2==0)
    cout<<num1<<"es par "<<endl;
else
    cout<< "es impar"<<num1<<endl;
if(num2%2==0)
    cout<<num2<<" es par "<<endl;
else
    cout << "es impar" <<num2 <<endl;
    
if ((num1+num2)%2==0)
    cout << "la suma de los numeros"<<num1<<"y"<<num2<< "es par" <<endl;
else 
    cout << "la suma de los numeros"<<num1<<"y"<<num2<< "es impar" <<endl;
return 0;
}