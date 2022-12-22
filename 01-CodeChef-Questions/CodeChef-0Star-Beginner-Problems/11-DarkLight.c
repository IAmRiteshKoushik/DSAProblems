// Refer the question - https://www.codechef.com/problems/DARLIG

// Solution
#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--){
        int N, K;
        scanf("%d %d", &N, &K);
        if(K==0){ // Light in OFF state
            if(N % 4 == 0) 
            printf("Off\n");
            else
            printf("On\n");
        }
        else{
            if(N % 4 == 0) // Tackles both N = 4 and N == 0 
            printf("On\n");
            else
            printf("Ambiguous\n");
        }
}
	return 0;
}