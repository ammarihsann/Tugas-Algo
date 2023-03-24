#include<iostream>
#include<string>
using namespace std;
int main(){
int x;

cout<<"Masukan Angka : ";
cin>>x;

string res=(x%2==0)?"genap":"ganjil";

cout<<"Bilangan tersebut adalah "<<res<<"\n";
	
return 0;	
}
