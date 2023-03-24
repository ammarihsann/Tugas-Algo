#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
float H, W, BMI; 

cout << "Program Menghitung Berat Badan Ideal\n\n";

cout << "Masukan Tinggi Badan : ";
cin >> H;

cout << "Masukan Berat Badan : ";
cin >> W;

BMI = W/(H*H)*10000;

if (BMI < 18.5){
cout << "Index BMI anda : "<< fixed << setprecision(1) << BMI <<"\n";	
cout << "Kurang Berat Badan\n";	
} 

else if (BMI >= 18.5 && BMI < 22.9){
cout << "Index BMI anda : "<< fixed << setprecision (1) << BMI <<"\n";	
cout << "Berat Badan Anda Normal\n";	
} 

else if (BMI >= 22.9 && BMI < 24.9){
cout << "Index BMI anda : "<<fixed << setprecision (1) << BMI <<"\n";	
cout << "Kelebihan Berat Badan\n";	
} 

else if (BMI >= 24.9 && BMI < 29.9){
cout << "Index BMI anda : "<< fixed << setprecision (1) << BMI <<"\n";	
cout << "Obesitas tingkat 1\n";	
} 

else if (BMI >= 29.9 && BMI < 30){
cout << "Index BMI anda : "<< fixed << setprecision (1) << BMI <<"\n";	
cout << "Obesitas tingkat 2\n";	
} 
else
cout << "Invalid Input!!! \n";

return 0;	
}
