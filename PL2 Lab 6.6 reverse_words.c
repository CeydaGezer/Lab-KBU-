#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Write a program using dynamic memory allocation that prints out words of a sentence in reverse 
order.  
Örnek (Example):  
Input: I love Programming Languages course  
Output: course Languages Programming love I */



char *reverse_words(const char *sentence) {
    int len = strlen(sentence);
    int word_count = 0;
    int total_len = 0;
    const char *word_start = sentence;

    // Kelime sayýsýný ve toplam uzunluðu hesapla
    while (*sentence) {
        if (*sentence == ' ') {
            word_count++;
            total_len += sentence - word_start;
            word_start = sentence + 1;
        } else {
            sentence++;
        }
    }

    if (*word_start) {  // Son kelimeyi ekle
        word_count++;
        total_len += sentence - word_start;
    }

    // Ters çevrilmiþ cümle için bellek ayýr
    char *reversed = (char *)malloc((total_len + word_count + 1) * sizeof(char));
    if (reversed == NULL) {
        fprintf(stderr, "Bellek ayýrma hatasý\n");
        return NULL;
    }

    char *reversed_end = reversed + total_len + word_count;
    sentence = word_start;  // Cümle iþaretçisini sýfýrla

    // Kelimeleri ters çevir ve ters çevrilmiþ cümleyi oluþtur
    while (word_count--) {
        const char *word_end = strchr(sentence, ' ');
        if (!word_end) {
            word_end = sentence + strlen(sentence);
        }

        // Kelimeyi ters kopyala
        while (word_end > sentence) {
            *reversed_end-- = *(word_end - 1);
            word_end--;
        }

        // Her kelimeden sonra boþluk ekle (son kelime hariç)
        if (word_count) {
            *reversed_end-- = ' ';
        }

        sentence = word_end + 1;  // Sonraki kelimeye geç
    }

    // Null karakteri ekle
    *reversed_end = '\0';

    return reversed;
}

int main() {
    char *sentence = "I love Programming Languages course";
    char *reversed_sentence = reverse_words(sentence);

    if (reversed_sentence == NULL) {
        return 1;
    }

    printf("Ters çevrilmiþ cümle: %s\n", reversed_sentence);

    // Belleði serbest býrak
    free(reversed_sentence);

    return 0;
}

