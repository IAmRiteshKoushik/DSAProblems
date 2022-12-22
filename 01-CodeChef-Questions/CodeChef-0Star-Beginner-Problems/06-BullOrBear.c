// Refer problem : https://www.codechef.com/problems/BULLBEAR

#include<stdio.h>

int main(void){
    int t, X, Y;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++){
        scanf("%d %d", &X, &Y);
        if (X > Y)
        {
            printf("LOSS\n");
        }
        else if (X == Y)
        {
            printf("NEUTRAL\n");
        }
        
        else {
            printf("PROFIT\n");
        }
    }
}