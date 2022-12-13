// Refer problem - https://www.codechef.com/problems/KEPLERSLAW

#include<stdio.h>

int main(){

    // Need of float as conditions are divisions and digits after the decimal points gets truncated
    float t, T1, T2, R1, R2;
    float condition1, condition2;
    scanf("%f", &t);
    for(int i = 1; i <= t; i++){
        scanf("%f %f %f %f", &T1, &T2, &R1, &R2);
        condition1 = (T1*T1)/(R1*R1*R1);
        condition2 = (T2*T2)/(R2*R2*R2);
        if(condition1 == condition2){
            printf("Yes\n");
        } else
        {
            printf("No\n");
        } 
    }
    return(0);
}
