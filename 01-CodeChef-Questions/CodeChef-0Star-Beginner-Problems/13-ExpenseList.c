// Refer Question - https://www.codechef.com/problems/EXPENSES

// Solution
#include<stdio.h>
#include<math.h>

int main(){
    int t, N, K;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%d %d", &N, &K);
        int total = pow(2, K);
        printf("%d\n", total);
        for(int i = N; i > 0; i--){
            total = total / 2;
        }
        printf("%d\n", total);
        }
    return(0);
}

