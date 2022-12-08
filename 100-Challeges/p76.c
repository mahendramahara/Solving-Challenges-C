/* Program 76: Dynamic Programming: Solve the Rod Cutting problem using dynamic programming. */
#include <stdio.h>

// Function to find the maximum value obtainable by cutting a rod of length n
int rodCutting(int price[], int n) {
    int dp[n + 1];
    dp[0] = 0;

    // Build the table using bottom-up approach
    for (int i = 1; i <= n; i++) {
        int max_val = -1;
        for (int j = 0; j < i; j++)
            max_val = (max_val < price[j] + dp[i - j - 1]) ? price[j] + dp[i - j - 1] : max_val;
        dp[i] = max_val;
    }
    return dp[n];
}

int main() {
    int price[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int n = sizeof(price) / sizeof(price[0]);

    printf("Maximum obtainable value by cutting a rod of length %d: %d\n", n, rodCutting(price, n));

    return 0;
}

/* 
   Copyright (c) 2023
   Mahendra Mahara
*/
