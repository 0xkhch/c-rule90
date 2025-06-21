#include <stdio.h>
#define LENGTH 512

int main(void) {
    int array[LENGTH] = {0};
    array[LENGTH - 1] = 1;

    for (int i = 0; i < LENGTH; i++) {
        //print iteration
        for (int y = 0; y < LENGTH; y++) {
            array[y] == 1 ? printf("#") : printf(" ");
        }
        printf("\n");
        
        // xor between neighbours of cell
        int new_array[LENGTH] = {0};
        for (int j = 1; j < LENGTH; j++) {
            int left = array[j - 1];
            int right = array[(j + 1) % LENGTH];
            new_array[j] = left ^ right;
        }
        
        //copy over
        for (int w = 0; w < LENGTH; w++) {
            array[w] = new_array[w];
        }
    }

    return 0;
}
