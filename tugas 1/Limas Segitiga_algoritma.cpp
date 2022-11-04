#include <iostream>
#include <cmath>
using namespace std;
int main(){
int AS, TS, T, A1, T1, LA1, LA2, LA3;

cout << "----Limas Segitiga----\n";
cout <<"Masukan Alas Segitiga : ";
cin >> AS;
cout <<"Masukan Tinggi Segitiga Alas : ";
cin >> TS;
cout <<"Masukan Tinggi Limas : ";
cin >> T;
cout <<"Masukan Alas : ";
cin >> A1;
cout <<"Masukan Tinggi Bidang tegak : ";
cin >> T1;
LA1 = A1*T1/2;
LA2 = A1*T1/2;
LA3 = A1*T1/2;
cout << "LA1 = "<< LA1 <<"\n";
cout << "LA2 = "<< LA2 <<"\n"; 
cout << "LA3 = "<< LA3 <<"\n";   

cout <<"----Volume----\n";
cout << "V = 1/3*(1/2*AS*TS)*T\n";
cout << "V = "<< (AS*TS/2)*T/3<<"\n";

cout <<"----Luas Permukaan----\n";
cout <<"LP = (1/2*AS*TS)+LA1+LA2+LA3\n";
cout <<"LP = "<<(AS*TS/2)+LA1+LA2+LA3<<"";
	
return 0;	
}
