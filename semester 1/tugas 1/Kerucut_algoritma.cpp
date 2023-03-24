#include<iostream>
#include <cmath>
using namespace std;
int main(){
int R, T, S;
cout << "----Kerucut----\n";
cout <<"Masukan Jari-jari : ";
cin >> R;
cout <<"Masukan Tinggi : ";
cin >> T;
S = sqrt(R*R+T*T);
cout << "S = "<< S <<"\n";

cout << "----Volume----\n";
cout << "V = 3.14*R*R*T\n";
cout << "V = "<<3.14*R*R*T/3<<"\n";

cout << "----Luas Permukaan----\n";
cout << "LP = (3.14*R*R)+(3.14*R*S)\n";
cout << "LP = "<< (3.14*R*R)+(3.14*R*S) <<"";

return 0;	
}
