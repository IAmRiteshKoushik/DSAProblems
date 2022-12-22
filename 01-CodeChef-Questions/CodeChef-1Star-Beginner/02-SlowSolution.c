// Refer problem - https://www.codechef.com/problems/SLOWSOLN

// Solution
#include<stdio.h>

int main(void){
    int t, maxT, maxN, sumN, requiredSum;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++){
        requiredSum = 0;
        scanf("%d %d %d", &maxT, &maxN, &sumN);
        while (maxT != 0 && sumN > 0)
        {
            if (maxN <= sumN){
                requiredSum = requiredSum + maxN * maxN;
                sumN = sumN - maxN;
                maxT--;
            }
            else
            {
                maxN = sumN;
            }
        }
        printf("%d\n", requiredSum);
    }
}