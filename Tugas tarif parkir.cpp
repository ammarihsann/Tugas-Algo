#include<iostream>
#include<string>
using namespace std;
int main(){
string inap, karcis;

int pilihan, jam, jam6,
tarif2 = 3000, 
tarif4 = 6000,
tarif6 = 8000,
inap2 = 25000, 
inap4 = 50000,
inap6 = 70000, 
denda2 = 50000,
denda4 = 100000,
denda6 = 100000,
bayar, bayar6;

cout<<"====PROGRAM C++ TARIF PARKIR KENDARAAN==== \n"<<endl;

cout<<"Berapa jumlah roda kendaraan anda (2/4/6) : ";
cin>>pilihan;

//==============KENDARAAN RODA 2=====================

if(pilihan== 2){
cout<<"apa anda memiliki karcis? (ada/tidak) : ";
cin>>karcis;

if(karcis=="tidak"){
cout<<"===================================="<<endl;	
cout<<"Anda harus membayar denda : "<<"Rp"<<denda2;
}
else if (karcis=="ada"){
cout<<"Apa kendaraan anda menginap? (ya/tidak) : ";
cin>>inap;

if(inap == "ya"){
cout<<"================================"<<endl;	
cout<<"Tarif inap anda adalah : "<<"Rp"<<inap2;
}
else if(inap == "tidak"){
cout<<"================================="<<endl;	
cout<<"Tarif parkir anda adalah : "<<"Rp"<<tarif2;
}}}


//==============KENDARAAN RODA 4=====================

else if(pilihan == 4){
cout<<"apa anda mempunyai karcis? (ada/tidak) : ";
cin>>karcis;

if(karcis=="tidak"){
cout<<"===================================="<<endl;	
cout<<"Anda harus membayar denda : "<<"Rp"<<denda4;
}
else if(karcis=="ada"){
cout<<"Berapa lama anda parkir (1-24) : ";
cin>>jam;

if (jam >= 1 && jam <= 5){
bayar = jam*2000+tarif4-2000;
cout<<"===================================="<<endl;
cout<<"Tarif parkir anda adalah : "<<"Rp"<<bayar;
}
else if(jam > 5 && jam <=12){
cout<<"===================================="<<endl;	
cout<<"Tarif parkir anda adalah : Rp25.000";
}
else if(jam > 12 && jam < 24){
cout<<"===================================="<<endl;	
cout<<"Tarif parkir anda adalah : Rp55.000";
}
else if (jam == 24){
cout<<"===================================="<<endl;	
cout<<"Tarif inap anda adalah "<<"Rp"<<inap4;
}
else if (jam >= 25 && jam <= 29){
cout<<"===================================="<<endl;	
cout<<"Tarif inap anda adalah "<<"Rp"<<inap4+tarif4;
}
else if (jam > 29 && jam <= 36){
cout<<"===================================="<<endl;	
cout<<"Tarif inap anda adalah "<<"Rp"<<inap4+25000;
}
else if (jam > 36 && jam <= 47){
cout<<"===================================="<<endl;	
cout<<"Tarif inap anda adalah "<<"Rp"<<inap4+55000;
}
else if (jam == 48){
cout<<"===================================="<<endl;	
cout<<"Tarif inap anda adalah "<<"Rp"<<inap4*2;
}

}}

//==============KENDARAAN RODA 6=====================

else if(pilihan==6){
cout<<"apa anda mempunyai karcis? (ada/tidak) : ";
cin>>karcis;

if(karcis=="tidak" && pilihan==6){
cout<<"===================================="<<endl;		
cout<<"Anda harus membayar denda : "<<"Rp"<<denda6;
}
else if(karcis=="ada"){
cout<<"Berapa lama anda parkir (1-24) : ";
cin>>jam6;

if (jam6 >= 1 && jam6 <= 5){
bayar6 = jam6*3500+tarif6-3500;
cout<<"===================================="<<endl;	
cout<<"Tarif parkir anda adalah : "<<"Rp"<<bayar6;
}
else if(jam6 > 5 && jam6 <=12){
cout<<"==================================="<<endl;		
cout<<"Tarif parkir anda adalah : Rp35.000";
}
else if(jam6 > 12 && jam6 < 24){
cout<<"==================================="<<endl;		
cout<<"Tarif parkir anda adalah : Rp70.000";
}
else if (jam6 == 24){
cout<<"==================================="<<endl;		
cout<<"Tarif inap anda adalah "<<"Rp"<<inap6;
}
else if (jam6 >= 25 && jam6 <= 29){
cout<<"===================================="<<endl;	
cout<<"Tarif inap anda adalah "<<"Rp"<<inap6+tarif6;
}
else if (jam6 > 29 && jam6 <= 36){
cout<<"===================================="<<endl;	
cout<<"Tarif inap anda adalah "<<"Rp"<<inap6+35000;
}
else if (jam6 > 36 && jam6 <= 47){
cout<<"===================================="<<endl;	
cout<<"Tarif inap anda adalah "<<"Rp"<<inap6+70000;
}
else if (jam6 == 48){
cout<<"===================================="<<endl;	
cout<<"Tarif inap anda adalah "<<"Rp"<<inap6*2;
}

}}

return 0;		
}
