#include <stdio.h>

int is_prime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int reverse_number(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main() {
    int start, end;
    printf("Enter the range (start end): ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers within the range %d to %d:\n", start, end);
    for (int i = start; i <= end; ++i) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    printf("Reversed prime numbers that are also prime:\n");
    for (int i = start; i <= end; ++i) {
        if (is_prime(i)) {
            int reversed = reverse_number(i);
            if (is_prime(reversed) && reversed != i) {
                printf("%d (Reversed: %d)\n", i, reversed);
            }
        }
    }

    return 0;
}
