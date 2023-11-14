#include <stdio.h>

int main() {
    int base, height;
    float answer;
    printf("Base: ");

    scanf("%d", &base);
    printf("Height: ");
    scanf("%d", &height);

    answer =  (base * 4)  + height;
    

    printf("The answer %.2f sum", answer);

    return 0;

}