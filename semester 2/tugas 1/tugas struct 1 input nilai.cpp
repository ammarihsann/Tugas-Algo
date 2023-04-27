#include<iostream>
using namespace std;

struct nilai_akhir{
int tugas, kuis, mid, uas;  	
};


int main(){
char grade;
double hitung;
	
nilai_akhir NA;	
NA.tugas=90;
NA.kuis=90;
NA.mid=80;
NA.uas=80;

hitung=(0.3 * NA.tugas) + (0.1 * NA.kuis) + (0.3 * NA.mid) + (0.3 * NA.uas);

if (hitung > 85){
grade = 'A';	
}
else if(hitung > 70 && hitung <= 85){
grade = 'B';	
}
else if(hitung > 55 && hitung <= 70){
grade = 'C';	
}
else if(hitung > 40 && hitung <= 55){
grade = 'D';	
}
else if(hitung <= 40){
grade = 'E';	
}


cout<<"Nilai Akhir = "<<hitung;
cout<<"\n";
cout<<"Grade = "<<grade;


return 0;
}
