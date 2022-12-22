// Refer problem - https://www.codechef.com/problems/ZCOSCH

// Solution
#include<stdio.h>

int main(){
    int r;
    scanf("%d", &r);
    if (r <= 50 && r > 0)        
    {
        printf("100\n");
    }
    else if (r > 50 && r <= 100)
    {
        printf("50");
    } 
    else {
        printf("0\n");
    }
    return(0);
}