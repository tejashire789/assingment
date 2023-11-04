#include <stdio.h>

int main() {
    int myArray[10];

    
    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &myArray[i]);
    }

   
    printf("Elements in reverse order:\n");
    for (int i = 9; i >= 0; i--) {
        printf("%d\n", myArray[i]);
    }

    return 0;
}
