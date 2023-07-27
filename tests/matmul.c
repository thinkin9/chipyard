#include<stdio.h>
#include<stdlib.h>

int main(void){
    int a[10][10], 
        b[10][10],
        c[10][10];
    int n, i, j, k;
    n = 10;
    srand(1);
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            a[i][j] = (rand()%100);
            b[i][j] = (rand()%100);
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            c[i][j] = 0;
            for(k = 0; k < n; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d\t", c[i][j]);
        }
        printf('\n');
    }
}