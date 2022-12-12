// Refer Problem - https://www.codechef.com/problems/CREDS

// Solution
#include<stdio.h>

int main(void){
    int t, X, Y, Z;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%d %d %d", &X, &Y, &Z);
    printf("%d\n", 4*X + 2*Y);
    }
}