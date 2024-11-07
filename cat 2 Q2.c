#include <stdio.h>

int main() {
    int scores[2][2] = {{85, 90}, {78, 88}}; 
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");  
    }

    return 0;
}