#include <stdio.h>
#include <stdlib.h>

/*	Dairenin yarýçapý kullanýcýya sorularak klavyeden girilmelidir ve fonksiyon main fonksiyounu içerisinden çaðrýlmalýdýr. 
	Fonksiyon prototipi: float square (const int r) 
	Pi sayýsý 3.14 dür ve programýn baþýnda sabit olarak tanýmlanmalýdýr. 
	Sonuç ekrana yazdýrýlýrken küsürat ‘2’ olacak þekilde olmalýdýr.*/


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

