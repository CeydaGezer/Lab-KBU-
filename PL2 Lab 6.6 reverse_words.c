#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* Write a program using dynamic memory allocation that prints out words of a sentence in reverse 
order.  
�rnek (Example):  
Input: I love Programming Languages course  
Output: course Languages Programming love I */



char *reverse_words(const char *sentence) {
    int len = strlen(sentence);
    int word_count = 0;
    int total_len = 0;
    const char *word_start = sentence;

    // Kelime say�s�n� ve toplam uzunlu�u hesapla
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

    // Ters �evrilmi� c�mle i�in bellek ay�r
    char *reversed = (char *)malloc((total_len + word_count + 1) * sizeof(char));
    if (reversed == NULL) {
        fprintf(stderr, "Bellek ay�rma hatas�\n");
        return NULL;
    }

    char *reversed_end = reversed + total_len + word_count;
    sentence = word_start;  // C�mle i�aret�isini s�f�rla

    // Kelimeleri ters �evir ve ters �evrilmi� c�mleyi olu�tur
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

        // Her kelimeden sonra bo�luk ekle (son kelime hari�)
        if (word_count) {
            *reversed_end-- = ' ';
        }

        sentence = word_end + 1;  // Sonraki kelimeye ge�
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

    printf("Ters �evrilmi� c�mle: %s\n", reversed_sentence);

    // Belle�i serbest b�rak
    free(reversed_sentence);

    return 0;
}

