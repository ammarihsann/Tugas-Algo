#include<iostream>
using namespace std;
int main(){
int R, T;
cout << "----Tabung----\n";
cout <<"Masukan jari-jari : ";
cin >> R;
cout <<"Masukan Tinggi : ";
cin >> T;

cout << "----hasil volume----\n";
cout << "Volume Tabung = 3,14*R*R*T\n";
cout << "Volume Tabung = "<< 3.14*R*R*T <<"\n";

cout << "----hasil luas permukaan----\n";
cout << "Luas permukaan Balok = 2*3.14*R*(R+T)\n";
cout << "Luas permukaan Balok = "<< 2*3.14*R*(R+T)<<"";
	
return 0;	
}
