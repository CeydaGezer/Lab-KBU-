#include <stdio.h>
#include <stdlib.h>

void separate_odd_even(int student_num) {
   
    int num_digits = 0,i;
    int temp_student_num = student_num;
    while (temp_student_num > 0) {
        temp_student_num /= 10;
        num_digits++;
    }

   
    int *even = (int*)malloc(num_digits * sizeof(int));
    int *odd = (int*)malloc(num_digits * sizeof(int));
    
    if (even == NULL || odd == NULL) {
        printf("Memory allocation failed.");
        return;
    }

   
    int even_count = 0, odd_count = 0;

    
    while (student_num > 0) {
        int digit = student_num % 10;
        if (digit % 2 == 0) {
            even[even_count++] = digit;
        } else {
            odd[odd_count++] = digit;
        }
        student_num /= 10;
    }

    
    printf("Even numbers: ");
    for ( i = even_count - 1; i >= 0; i--) {
        printf("%d ", even[i]);
    }
    printf("\n");

   
    printf("Odd numbers: ");
    for (i = odd_count - 1; i >= 0; i--) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    
    free(even);
    free(odd);
}

int main() {
    int student_num;
    printf("Enter your student number: ");
    scanf("%d", &student_num);

    separate_odd_even(student_num);

    return 0;
}

