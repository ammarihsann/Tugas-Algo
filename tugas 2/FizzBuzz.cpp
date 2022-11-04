#include<iostream>
using namespace std;
int main(){
int i;

cout <<"Masukan Angka : ";
cin >>i;

if (i%15 == 0){
printf ("FizzBuzz");
}
         
else if (i%3 == 0){  
printf("Fizz");
}
         
else if (i%5 == 0){                      
printf("Buzz");
}
else      
cout << i;                

	
return 0;	
}
