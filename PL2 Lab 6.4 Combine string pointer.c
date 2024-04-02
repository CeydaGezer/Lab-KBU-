#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Write a program that combines two character strings taken from the keyboard and prints it on the 
screen using a pointer in C language. */

int main(int argc, char *argv[]) {
    char str1[100], str2[100], str3[200];
    
    printf("Please write your first string: ");
    gets(str1);
    
    
    printf("Please write your second string: ");
    gets(str2);
    
    // Remove newline characters if present
    if (str1[strlen(str1) - 1] == '\n')
        str1[strlen(str1) - 1] = '\0';
    if (str2[strlen(str2) - 1] == '\n')
        str2[strlen(str2) - 1] = '\0';
    
    strcpy(str3, str1); // Copy the first string to str3
    strcat(str3, str2); // Concatenate the second string to str3
    
    printf("Combined string: %s\n", str3); // Print the combined string
    
    return 0;
}

