#include<iostream>
#include<string>
using namespace std;
int main(){
int x;

cout<<"Masukan nilai : ";
cin>>x;

if (x>=81) cout << "Nilai A\n"<<"Sangat Istimewa\n" << "Angka Mutu 4\n";
else if(x>=76) cout <<"Nilai A-\n"<<"Istimewa\n" << "Angka Mutu 3,7\n";	
else if(x>=72) cout <<"Nilai B+\n"<<"Lebih dari Baik\n" << "Angka Mutu 3,3\n";
else if(x>=68) cout <<"Nilai B\n"<<"Baik\n" << "Angka Mutu 3\n";	
else if(x>=64) cout <<"Nilai B-\n"<<"Cukup Baik\n" << "Angka Mutu 2,7\n";
else if(x>=60) cout <<"Nilai C+\n"<<"Lebih dari Cukup\n" << "Angka Mutu 2,3\n";
else if(x>=56) cout <<"Nilai C\n"<<"Cukup\n" << "Angka Mutu 2\n";
else if(x>=41) cout <<"Nilai D\n"<<"Kurang\n" << "Angka Mutu 1\n";
else if(x>=1) cout <<"Nilai E\n"<<"Gagal\n" << "Angka Mutu 0\n";
else

return 0;
}
