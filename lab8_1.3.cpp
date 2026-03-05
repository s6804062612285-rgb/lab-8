#include <stdio.h>

void printAr(int myAr[], int size);
void addthree(int number[], int pos[][2], int sizeNum, int sizePos);

int main() {

    int number[5] = {20, 50, 100, 199, 9}; 
    int n = 5;

    int pos_and_val[3][2] = {
        {0, 535}, 
        {2, 100}, 
        {4, 11}
    };
    int m = 3; 

    printAr(number, n);
    printf("\n");

    addthree(number, pos_and_val, n, m);

    printAr(number, n);

    return 0;
}

void addthree(int number[], int pos[][2], int sizeNum, int sizePos) {
    int i;
    
    for (i = 0; i < sizePos; i++) {
        int index = pos[i][0]; 
        int value = pos[i][1]; 

        if (index >= 0 && index < sizeNum) {
            printf("index %d: += %d", index, value, number[index]);
            
            number[index] = number[index] + value;
            
            printf(" -> %d\n", number[index]);
        } 
    }
}

void printAr(int myAr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", myAr[i]);
    }
    printf("\n");
}