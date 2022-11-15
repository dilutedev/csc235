#include <stdio.h>


void count_to_n (int n) {
    int count = 0;

    if (n <= 1)
    {
        printf("%d \n", n);
    };
    for (int i = 1;i<=n;i++) {
        printf("%d \n", i);
    };
};

int main() {
    int n;
    printf("Type a number: ");
    scanf("%d", &n);
    count_to_n(n);
};
