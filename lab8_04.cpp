#include <stdio.h>

int main() {
    float score[4], temp;
    int i, j;
    for (i = 0; i < 4; i++) {
        scanf("%f", &score[i]);
    }
    for (i = 0; i < 4 - 1; i++) {
        for (j = 0; j < 4 - i - 1; j++) {
            if (score[j] < score[j + 1]) {
                temp = score[j];
                score[j] = score[j + 1];
                score[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < 3; i++) {
        printf("%.2f ", score[i]);
    }
    return 0;
}