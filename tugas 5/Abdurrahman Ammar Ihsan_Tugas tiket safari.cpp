#include<iostream>
using namespace std;
int main(){
	
int umur,   t, p, total;
string d, hari;
	
cout << "=====PEMBELIAN TIKET TAMAN SAFARI===== \n\n";

cout << "Darimana anda berasal (domestik/internasional) : ";
cin >> d;

cout << "Masukan Umur Anda : ";
cin >> umur;

cout << "Hari apa anda ingin berkunjung (weekday/weekend) : ";
cin >> hari;
cout<<endl;
if (hari == "weekend"){
cout << "======PILIHAN TIKET===== \n";
cout << "1. Reguler \n";
cout << "2. Safari trek & outbound Rp 150.000/orang dan min reservasi 25 orang \n";
cout << "3. Safari Malam \n";
cout << "4. Behind the scene tour VVIP Rp.1.000.000/pax min 5 pax max 15 pax \n";
cout << "========================\n\n";
cout << "Pilihan tiket anda (1-4) : ";
}
if (hari == "weekday"){
cout << "======PILIHAN TIKET===== \n";
cout << "1. Reguler \n";
cout << "2. Safari trek & outbound Rp 150.000/orang dan min reservasi 25 orang \n";
cout << "3. Safari Malam \n";
cout << "========================\n\n";	
cout << "Pilihan tiket anda (1-3) : ";	
}
cin >> p;
cout << "Berapa tiket yang anda ingin beli : ";
cin >> t;
cout <<"\n";

switch (p) {
case 1:
if (umur <= 5 && d=="domestik" && hari=="weekday"){
total = 200000*t; 	
}
else if	(umur <= 5 && d=="internasional" && hari=="weekday"){
total = 350000*t; 
}
else if	(umur>= 6 && d=="domestik" && hari=="weekday"){
total = 230000*t; 
}
else if	(umur>= 6 && d=="internasional" && hari=="weekday"){
total = 400000*t;
}
if (umur <= 5 && d=="domestik" && hari=="weekend"){
total = 225000*t; 	
}
else if	( umur <= 5 &&  d=="internasional" && hari=="weekend" ){
total = 350000*t; 
}
else if	( umur >= 6 && d=="domestik" && hari=="weekend"){
total = 255000*t; 
}
else if	( umur >= 6 && d=="internasional" && hari=="weekend"){
total = 400000*t;
}
break;

case 2:
total = 150000*t;
if (t < 25){
cout << "Maaf, Minimal reservasi 25 0rang";
return 0;
}
else if (t >= 25){
total;	
}	
		
break;

case 3:
if (umur <= 5 && d=="domestik"){
total = 160000*t; 	
}
else if	(umur <= 5 && d=="internasional"){
total = 300000*t; 
}
else if	(umur>= 6 && d=="domestik"){
total = 180000*t; 
}
else if	(umur>= 6 && d=="internasional"){
total = 350000*t;
}
break;

case 4:
total = 1000000*t;
if (t < 5 || t > 15){
cout << " Maaf, Minimal pembelian 5 pax dan max 15 pax \n";
return 0;	
}
else if (t >= 5 || t <= 15 ){
total;	
}	
break;
}

cout << "================================== \n";
cout << "Total Harga Tiket Anda : ""Rp."<< total;

return 0;	
}
