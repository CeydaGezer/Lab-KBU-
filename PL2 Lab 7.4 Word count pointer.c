#include <stdio.h>
#include <stdlib.h>

/* Write the C program using dynamic memory, which counts the words in a given text or sentence. */

int main(int argc, char *argv[]) {
	
	char *sentence;
	int i,count=0,word_count;
		
	printf("Please write your sentence:");
	sentence=(char*) calloc(100,sizeof(char));
	if(sentence==NULL){
		printf("Memory allocation failed.");
		return 1;
	}
	gets(sentence);
	
	
	for(i=0;sentence[i]!='\0';i++){
		if(sentence[i]==' '){
			count++;
		}	
	}
	
	word_count=count+1;
	printf("There are %d words in the sentence.",word_count);
	
	
	return 0;
}
