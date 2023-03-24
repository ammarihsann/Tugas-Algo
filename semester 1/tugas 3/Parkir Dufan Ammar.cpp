#include<iostream>
#include<cmath>
using namespace std;
int main(){
string day, karcis,k;

int pilih,pilih2, tiket,tiket2, total,total_akhir, total2, total2_akhir;

cout <<"============PROGRAM KARCIS DUFAN============\n\n";
	
cout<<"Hari apa anda berkunjung?(weekday/weekend) : ";
cin>>day;
cout<<endl;

if(day=="weekday"){
cout<<"=========================Beberapa Pilihan Tiket Masuk========================= \n"<<endl;
cout<<"1. Annual Pass Dufan (Ecard) + 1 x kunjungan Reguler Ancol = Rp350.000"<<endl;
cout<<"2. Six Months Pass Dufan (Ecard) + 1 x kunjungan Reguler Ancol = Rp295.000"<<endl;
cout<<"3. Weekday Dufan + Ancol Bonus 1 Produk Sosro (Min. pembelian 4 Tiket, berlaku kelipatan) = Rp185.000"<<endl;
cout<<"4. Weekday Dufan + Ancol = Rp250.000"<<endl;
cout<<"5. Six Months Pass Dufan (Ecard) + 1 x kunjungan reguler Ancol + Weekday Gondola = Rp333.000 "<<endl;
cout<<"Pilihan Anda? (1-5): ";
cin>>pilih;
cout <<"Berapa Tiket Yang ingin anda beli? : ";
cin >> tiket;
if(pilih==1 && tiket>=1){
total = 350000;
total_akhir = tiket*total;	
}
else if(pilih==2 && tiket>=1){
total = 295000;
total_akhir = tiket*total;
}
else if(pilih==3 &&  tiket%4 != 0){
cout <<"Minimal pembelian 4 tiket, berlaku kelipatan";
return 0;
}
else if(pilih==3 && tiket%4==0){
total = 185000;
total_akhir = tiket*total;
}
else if(pilih==4 && tiket>=1){
total = 250000;
total_akhir = tiket*total;
}	
else if(pilih==5 && tiket>=1){
total = 333000;
total_akhir = tiket*total;
}}

else if (day=="weekend"){
cout<<"1. Annual Pass Dufan (Ecard) + 1 x kunjungan Reguler Ancol = Rp350.000"<<endl;
cout<<"2. Six Months Pass Dufan (Ecard) + 1 x kunjungan Reguler Ancol = Rp295.000"<<endl;
cout<<"3. Weekend Dufan + Ancol + Samudra = Rp315.000"<<endl;
cout<<"4. Weekend Dufan + Ancol = Rp275.000"<<endl;
cout<<"5. Weekend Dufan + Ancol + Gondola = Rp317.000"<<endl;
cout<<"6. Weekend Dufan + Ancol Bonus 1 Produk Sosro (Min. Pembelian 4 Tiket, berlaku kelipatan) = Rp250.000 "<<endl;
cout<<"7. Six Months Pass Dufan (Ecard) + 1 x kunjungan reguler Ancol + Weekend Gondola = Rp337.000"<<endl;
cout<<"Pilihan Anda? (1-7): ";
cin>>pilih2;

cout <<"Berapa Tiket Yang ingin anda beli : ";
cin >> tiket2;

if(pilih2==1 && day=="weekend" && tiket2>=1){
total2 = 350000;
total2_akhir = tiket2*total2;
}		
else if(pilih2==2 && day=="weekend" && tiket2>=1){
total2 = 295000;
total2_akhir = tiket2*total2;
}
	
else if(pilih2==3 && day=="weekend" && tiket2>1){
total2 = 315000;
total2_akhir = tiket2*total2;
}	
else if(pilih2==4 && day=="weekend" && tiket2>=1){
total2 = 275000;
total2_akhir = tiket2*total2;
}	
else if(pilih2==5 && day=="weekend" && tiket2>=1){
total2 = 317000;
total2_akhir = tiket2*total2;
}
else if(pilih2==6 && day=="weekend" && tiket2%4!=0){
cout <<"Pembelian minimal 4 tiket, berlaku kelipatan";	
return 0;
}
else if(pilih2==6 && day=="weekend" && tiket2%4==0){
total2 = 250000;
total2_akhir = tiket2*total2;
}
else if(pilih2==7 && day=="weekend" && tiket2>=1){
total2 = 337000;
total2_akhir = tiket2*total2;
}
}

cout<<"Beli karcis kendaraan? (y/n) : ";
cin>>karcis;
if (karcis=="n" && day=="weekday"){
cout << "=================================\n";
cout << "( Tidak menaiki kendaraan )"<<endl;
cout << "Total harga tiket masuk : "<<"Rp"<<total_akhir<<"";	
}
else if (karcis=="n" && day=="weekend"){
cout << "=================================\n";
cout << "( Tidak menaiki kendaraan )"<<endl;
cout << "Total harga tiket masuk : "<<"Rp"<<total2_akhir<<"";	
}

else if (karcis=="y"){
cout << "Kendaraan anda (motor/mobil) : ";
cin>>k;

if(k=="motor" && day=="weekday"){
cout << "=================================\n";	
cout <<"( Menggunakan Motor : Rp15.000 )"<<endl;
cout <<"Total harga tiket masuk : "<<"Rp"<<total_akhir+15000<<"";       
}
else if(k=="motor" && day=="weekend"){
cout << "=================================\n";	
cout <<"( Menggunakan Motor : Rp15.000 )"<<endl;
cout <<"Total harga tiket masuk : "<<"Rp"<<total2_akhir+15000<<"";       
}

else if (k=="mobil" && day=="weekday"){
cout << "=================================\n";	
cout <<"( Menggunakan Mobil : Rp25.000 )"<<endl;
cout << "Total harga tiket masuk : "<<"Rp"<<total_akhir+25000<<"";	
}
else if (k=="mobil" && day=="weekend"){
cout << "=================================\n";	
cout <<"( Menggunakan Mobil : Rp25.000 )"<<endl;
cout << "Total harga tiket masuk : "<<"Rp"<<total2_akhir+25000<<"";	
}
}
return 0;	
}
