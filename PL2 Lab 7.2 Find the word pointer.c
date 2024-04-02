#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Write a program that searches for the given string in the given sentence 
   and if the word is found then prints the starting index of the places of 
   this word to the screen. */

int main() {
    char *sentence, *word;
    int i, j, word_len;
  

    sentence = (char*)malloc(sizeof(char) * 100);
    if (sentence == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Please write your sentence: ");
    fgets(sentence, 100, stdin); // Using fgets instead of gets to avoid buffer overflow and undefined behavior

    word = (char*)malloc(sizeof(char) * 20);
    if (word == NULL){
        printf("Memory allocation failed\n");
        free(sentence);
        return 1;
    }

    printf("Please write the word that you want to find: ");
    scanf("%s", word);

    word_len = strlen(word);

    for (i = 0; sentence[i] != '\0'; i++) {
    // Word matching check
    for (j = 0; j < word_len; j++) {
        if (sentence[i + j] != word[j]) {
            break;
        }
    }

    // Word found if the inner loop reached the end of the word
    if (j == word_len && (sentence[i + j] == ' ' || sentence[i + j] == '\0')) {
        printf("'%s' found at index %d\n", word, i);
        
    }
    
}
	if(j+1!= word_len)
    	printf("Word didn't found.");

    free(sentence);
    free(word);

    return 0;
}

