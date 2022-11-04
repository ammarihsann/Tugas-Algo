#include<iostream>
using namespace std;
int main(){
// rumus perhitungannya ( P*L*T )/4000 = Berat Volumetrik
	
int pilih, P, L, T;	
int total;
float berat;
	
		
cout<<"=====CEK ONGKIR DAKOTA CARGO===== \n\n";
cout<<"List kota yang tersedia :\n";
cout<<"1.  Jakarta\n";
cout<<"2.  Bekasi\n";
cout<<"3.  Cirebon\n";
cout<<"4.  Bandung \n";
cout<<"5.  Banyuwangi\n";
cout<<"6.  Cianjur\n";
cout<<"7.  Denpasar\n";
cout<<"8.  Jember\n";
cout<<"9.  Jombang\n";
cout<<"10. Kediri\n\n";
cout<<"Pilih kota tujuan (1-10) : ";
cin>>pilih;
if (pilih >= 1 && pilih<=10){
cout<<"Masukan panjang barang (cm) : ";
cin>>P;
cout<<"Masukan lebar barang (cm) : ";
cin>>L;	
cout<<"Masukan tinggi barang (cm) : ";
cin>>T;
cout<<endl;
}
else{
cout<<"Maaf, kota belum tersedia";
}
berat = ( P*L*T )/4000; 

switch(pilih){
case 1:
if (berat<=20){
total = 29000;
}
else{
total = 29000+1450*(berat-20);		
}
break;

case 2:
if (berat<=20){
total = 53000;
}
else{
total = 53000+2650*(berat-20);
}
break;

case 3:
if (berat<=20){
total = 58000;
}
else{
total = 58000+2900*(berat-20);
}
break;

case 4:
if (berat<=20){
total = 24000;
}
else{
total = 24000+2900*(berat-20);
}
break;

case 5:
if (berat<=20){
total = 89000;
}
else{
total = 89000+4450*(berat-20);
}
break;

case 6:
if (berat<=20){
total = 28000;
}
else{
total = 28000+1400*(berat-20);
}
break;

case 7:
if (berat<=20){
total = 67000;
}
else{
total = 67000+3350*(berat-20);
}
break;

case 8:
if (berat<=20){
total = 61000;
}
else{
total = 61000+3050*(berat-20);
}
break;

case 9:
if (berat<=20){
total = 78000;
}
else{
total = 78000+3900*(berat-20);
}
break;

case 10:
if (berat<=20){
total = 80000;
}
else{
total = 80000+4000*(berat-20);
}
break;
}

cout<<"========================== \n";
cout<<"Total berat barang : "<<berat<<"kg \n";
cout<<"Tarif pengiriman : ""Rp"<<total<<"\n";
										
return 0;	
}
