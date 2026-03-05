#include <stdio.h>

int checkscore(char std[]);
char charkeys[10] = {'D', 'B', 'D', 'C', 'C', 'D', 'A', 'E', 'A', 'D'};

int main() {
    int i, j;
    int count_no1 = 0;
    int wrong_count[10] = {0};
    char ans[8][10] = {
        {'A','B','A','C','C','D','E','E','A','D'},
        {'D','B','A','B','C','A','E','E','A','D'},
        {'E','D','D','A','C','B','E','E','A','D'},
        {'C','B','A','E','D','C','E','E','A','D'},
        {'A','B','D','C','C','D','E','E','A','D'},
        {'B','B','E','C','C','D','E','E','A','D'},
        {'B','B','A','C','C','D','E','E','A','D'},
        {'E','B','E','C','C','D','E','E','A','D'}
    };

    for (i = 0; i < 8; i++) {
        printf("std %d => %d\n", i + 1, checkscore(ans[i]));
        if (ans[i][0] == charkeys[0]) count_no1++;
        for (j = 0; j < 10; j++) {
            if (ans[i][j] != charkeys[j]) {
                wrong_count[j]++;
            }
        }
    }
    printf("\nTotal correct for 1: %d\n", count_no1);

    int hardest_no = 0;
    for (i = 1; i < 10; i++) {
        if (wrong_count[i] > wrong_count[hardest_no]) {
            hardest_no = i;
        }
    }
    printf("Hard question is No.%d\n", hardest_no + 1, wrong_count[hardest_no]);

    return 0;
}

int checkscore(char std[]) {
    int score = 0, i;
    for (i = 0; i < 10; i++) {
        if (std[i] == charkeys[i]) score++;
    }
    return score;
}