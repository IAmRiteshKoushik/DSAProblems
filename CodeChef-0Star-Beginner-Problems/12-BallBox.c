// Refer question - https://www.codechef.com/problems/BALLBOX

// Solution
#include<stdio.h>

int main(){
    int t, N, K;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        scanf("%d %d", &N, &K);
        if(N >= (K * (K+1) / 2)){
            printf("Yes\n");
        } else
        {
            printf("No\n");
        }
    }
    return(0);
}