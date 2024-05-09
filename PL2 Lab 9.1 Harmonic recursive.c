#include <stdio.h>
#include <stdlib.h>

/* Write a program using recursive function that calculates the sum of the first n elements from Harmonic series and print 
the sum from the main function. Also, the function displays the series elements. n is entered by the user. The nth 
harmonic sequence element is calculated as 1/(a + (n - 1)d). Consider a = 1, d = 1, and n>0.  */


double harmonic_func(int n){
	
// Base case
    if (n == 1)
        return 1.0;
   
    /*�z�nde, Harmonik serisinin her bir terimi, bir �nceki terimin tersi ile bir sonraki terimin tersi toplam�d�r. 
	Bu nedenle, harmonic_func fonksiyonunda her bir terimi hesaplamak i�in �nceki terimi kullanmam�z gerekiyor.
	Bunu g�z �n�nde bulundurarak, harmonic_func(n) fonksiyonunu hesaplayabilmek i�in harmonic_func(n - 1)'i kullan�r�z ��nk� bir �nceki terimden devam ediyoruz.*/
    else
        return harmonic_func(n - 1) + 1.0 / n;
}


int main(int argc, char *argv[]) {
	
	double result;
	int n;
	
	printf("Please enter the element number:");
	scanf("%d",&n);
	
	result=harmonic_func(n);
	
	printf("%lf",result);
	
	return 0;
}
