#include <stdio.h>

int main() {
   
    int array[10]; 

    int scores[2][2] = {
        {10, 20},
        {30, 40}
    };

    printf("Element at row 0, column 0: %d\n", scores[0][0]);
    printf("Element at row 1, column 1: %d\n", scores[1][1]);

    return 0;
}
