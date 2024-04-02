#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // Include for strcpy, strcat

int main(int argc, char *argv[]) {

    char *full_name,name[50],surname[50];  // Pointer to hold dynamically allocated memory
    int name_length, surname_length, total_length;

   
    printf("Please enter your name: ");
    scanf("%s", name); 
    name_length = strlen(name);

    printf("Please enter your surname: ");
    scanf("%s", surname); 
    surname_length = strlen(surname);

    // Calculate total required space (including space and null terminator)
    total_length = name_length + surname_length + 2;

    
    full_name = (char *)malloc(total_length * sizeof(char));
    if (full_name == NULL) {
        printf("Memory allocation failed!\n");
        return 1; 
    }

    strcpy(full_name, name);
    strcat(full_name, " ");
    strcat(full_name, surname);

    printf("Your full name: %s\n", full_name);

 
    free(full_name);

    return 0;
}


