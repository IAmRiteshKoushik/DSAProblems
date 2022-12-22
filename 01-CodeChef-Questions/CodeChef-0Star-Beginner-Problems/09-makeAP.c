// Refer Problem - https://www.codechef.com/problems/MAKEAP

// Solution
#include<stdio.h>

int main(void){
    int t, A, C;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%d %d", &A, &C);
        if ((A + C) % 2 == 0){

            // Only an odd number when divided by two would give a decimal as the AP value which is 
            // not acceptable in the question. Even number should be the sum of A + C

            printf("%d\n", (A + C)/2);
        }
        else {
            printf("-1\n");
        }
    }
}