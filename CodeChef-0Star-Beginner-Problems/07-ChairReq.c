// Refer Problem : https://www.codechef.com/problems/CHAIRS_

// Solution
#include<stdio.h>

int main(void){
    int t, X, Y;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++){
        scanf("%d %d", &X, &Y);
        if (X > Y)
        {
            printf("%d\n", X - Y);
        }
        else {
            printf("0\n");
        }
    } 
}