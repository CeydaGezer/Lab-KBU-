#include <stdio.h>
#include <stdlib.h>

/*The amount of money entered from the keyboard is desired to be createdusing the minimum number of banknotes.
For this purpose, the number of each banknote (100,50,20 and 10) must be determined for the amount entered.
Note: The amount of money entered o the keyboard must be multiples of 10*/

int main(int argc, char *argv[]) {
	int money,money1,money2,money3,money4;
	
	printf("Enter the amount of money:");
	scanf("%d",&money);
	
	money1=money/100;
	printf("100 banknot: %d\t", money1);
	
	money=money%100;
	
	money2=money/50;
	printf("50 banknot:%d\t",money2);
	
	money=money%50;
	
	money3=money/20;
	printf("20 banknot:%d\t",money3);
	
	money=money%20;
	
	money4=money/10;
	printf("10 banknot:%d\t",money4);
	
	return 0;
}
