#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str;
    int *freq;
    int i;

   
    str = (char*)malloc(100 * sizeof(char));
    freq = (int*)calloc(256, sizeof(int)); // Tüm elemanlarý sýfýra ayarla

    if (str == NULL || freq == NULL) {
        printf("Memory allocation failed.");
        return 1;
    }

  
    printf("Bir string giriniz: ");
    fgets(str, 100, stdin);

   
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != '\n') // Yeni satýr karakterini atla
            freq[(int)str[i]]++;
    }

    // Her karakterin frekansýný yazdýr
    printf("String içindeki karakter frekanslarý:\n");
    for(i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            printf("'%c' : %d\n", (char)i, freq[i]);
        }
    }

    
    free(str);
    free(freq);

    return 0;
}
