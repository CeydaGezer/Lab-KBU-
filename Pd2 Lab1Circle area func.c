#include <stdio.h>
#include <stdlib.h>

/*	Dairenin yar��ap� kullan�c�ya sorularak klavyeden girilmelidir ve fonksiyon main fonksiyounu i�erisinden �a�r�lmal�d�r. 
	Fonksiyon prototipi: float square (const int r) 
	Pi say�s� 3.14 d�r ve program�n ba��nda sabit olarak tan�mlanmal�d�r. 
	Sonu� ekrana yazd�r�l�rken k�s�rat �2� olacak �ekilde olmal�d�r.*/


float square(const int r){
	
	float pi=3.14,area;	
	area=pi*r*r;
	
	printf("%.2f",area);
	
	return area;
}



int main(int argc, char *argv[]) {
	
	int r;
	float area;
	printf("Please enter your radius:");
	scanf("%d",&r);
	
	area=square(r);
		
	return 0;
}

