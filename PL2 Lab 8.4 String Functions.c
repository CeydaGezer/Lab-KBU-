#include <stdio.h>
#include <string.h>

int main() { 
  
    char str1[20],str2[20],str3[20];
    int len,ret;

    printf("Please enter your first string:");
    gets(str1);

    printf("Please enter your second string:");
    gets(str2);

    // Copy str1 to str3
    strcpy(str3,str1);

    // Concatenate str2 to str3
    strcat(str3,str2);

    printf("Final string: %s\n",str3);

    len=strlen(str3);
    printf("Length of the third string: %d\n",len);

    ret=strcmp(str1,str2);
    if (ret<0) {
        printf("First string is less than the second.");
    } else if (ret>0) {
        printf("Second string is less than the first.");
    } else {
        printf("First string is equal to the second.");
    }

    return 0;
}

