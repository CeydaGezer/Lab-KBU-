#include <stdio.h>
#include <stdlib.h>

/* The program code that identifies whether two string entered from the keyboard are the same or not,and which one is longer as a word. */

int main(int argc, char *argv[]) {
	
	char *word1,*word2;
	int len1,len2;
	
	word1 = (char*)malloc(sizeof(char) * 100);
    if (word1==NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    word2 = (char*)malloc(sizeof(char) * 100); 
    if (word2 == NULL) {
        printf("Memory allocation failed\n");
        free(word1); 
        return 1;
    }
    	
	printf("Please write the first word:");
	scanf("%s",word1);
	
	printf("Please write the second word:");
	scanf("%s",word2);
	
	
	if (len1>len2) {
        printf("First word is longer than the second.\n");
    } else if (len2>len1){
        printf("Second word is longer than the first.\n");
    } else {
        printf("Both words have the same length.\n");
    }
	
	free(word1);
    free(word2);
	
	return 0;
}
