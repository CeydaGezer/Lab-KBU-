#include <stdio.h>
#include <stdlib.h>

/* Write and test a recursive function that returns the value of the following recursive definiton:
  f(x)= 0    if x< = 0 
  f(x-1)+2    otherwise*/
  
  
  int f(int x){
  	if (x<=0){
  		return 0;
  		
  	}
  	
  	
  	else {
  		return f(x-1)+2;
	  }	
  		
	  } 

int main(int argc, char *argv[]) {
	
	int x,result;
	printf("Please enter a x value:");
	scanf("%d",&x);
	result=f(x);
	printf("%d",result);
	
	
	
	
	return 0;
}
