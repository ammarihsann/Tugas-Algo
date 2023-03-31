#include<iostream>
using namespace std;

struct gaji_per_jam{
	int perjam = 6000;
	int lembur = 18000;
}; 
int main(){
gaji_per_jam gaji;

int jam;
float hitung, hitung1;


cout<<"Masukan jam kerja = ";
cin >> jam;
if(jam > 40){
hitung1 = jam - 40;	
hitung = 40*gaji.perjam + (gaji.lembur*hitung1);		
}
else{
	hitung = jam * gaji.perjam;
}

cout<<"Gaji Anda = "<<hitung;














return 0;	
}