#include <stdio.h>
#include <string.h>
#include <usart.h>

#define MAX 5
#define SEVENFOLD 7


int main() {
    initUSART();
    int array[MAX] = {0};
    for (int i = 0; i < MAX; i++) {
        printf("Array: %x has value %d \n", &array[i], array[i]);
    }
    printf("-----------\n");
    for (int i = 0; i < MAX; i++) {
        printf("Array: %x has value %d \n", &array[i], (array[i]+SEVENFOLD*i));
    }
}