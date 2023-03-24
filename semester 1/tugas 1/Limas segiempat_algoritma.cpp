#include <iostream>
#include <cmath>
using namespace std;
int main(){
int S, T, T1, A, LA1, LA2, LA3;
	
cout <<"----Limas Segiempat----\n";
cout <<"Masukan tinggi : ";
cin >> T;
cout <<"Masukan Sisi : ";
cin >> S;
cout <<"Masukan Alas : ";
cin >> A;
cout <<"Masukan Tinggi Bidang Tegak : ";
cin >> T1;
LA1 = A*T1/2; 	
LA2 = A*T1/2;
LA3 = A*T1/2;
cout << "LA1 = "<< LA1 <<"\n";
cout << "LA2 = "<< LA2 <<"\n"; 
cout << "LA3 = "<< LA3 <<"\n";  

cout <<"----Volume----\n";
cout <<"V = S*S*T/3\n";
cout <<"V = "<<S*S*T/3<<"\n";

cout <<"----Luas Permukaan----\n";
cout <<"LP = S*S+LA1+LA2+LA3";
cout <<"LP = "<<S*S+LA1+LA2+LA3<<"\n";
return 0;	
}
