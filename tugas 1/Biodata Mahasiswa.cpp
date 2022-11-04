#include<iostream>
using namespace std;
int main(){
string NL, NIM, P, FK, UNIV;
cout <<"------------------------------------\n";
cout << "\tBIODATA MAHASISWA \n";
cout <<"------------------------------------\n\n";

cout << "Nama Lengkap \t: "; getline (cin, NL);
cout << "NIM  \t\t: "; getline (cin, NIM);
cout << "Prodi  \t\t: "; getline (cin, P);
cout << "Fakultas  \t: "; getline (cin, FK);
cout << "Universitas  \t: "; getline (cin, UNIV);

cout <<"------------------------------------\n\n";

cout <<"       BIODATA MAHASISWA            \n\n";

cout <<"------------------------------------\n\n";

cout <<"Nama \t\t: "<<NL<<"\n";
cout <<"NIM \t\t: "<<NIM<<"\n";
cout <<"Prodi \t\t: "<<P<<"\n";
cout <<"Fakultas \t: "<<FK<<"\n";
cout <<"Universitas \t: "<<UNIV<<"\n";
cout <<"------------------------------------\n";
cout <<"Created By : Abdurrahman Ammar Ihsan";
	
return 0;	
}
