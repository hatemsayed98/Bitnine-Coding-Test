#include <stdio.h>
#include <stdlib.h>


///Iterative Method
int itrFunction(int n)
{
    int a = 0, b = 1, c = 2, d;

    if (n == 0)
    {
        return a;
    }
    if (n == 1)
    {
        return b;
    }
    if (n == 2)
    {
        return c;
    }

    for (int i = 3; i <= n; i++)
    {
        d = a + b;
        a = b;
        b = c;
        c = d;
    }
    return d;
}


/// Recursive Method
int recFunction(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
        return 2;
    }
    else
    {
        return recFunction(n-3) + recFunction(n-2);
    }
}

///Dynamic Programing Method
int dpFunction(int n)
{
    int* dp;
    dp = (int*)malloc(n * sizeof(int)+ 1);
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i-3] + dp[i-2];
    }
    int result = dp[n];
    free(dp);
    return result;
}


int main()
{
    int n = 25;
    int result = itrFunction(n);
    printf("F(%d) = %d\n", n, result);

    result = recFunction(n);
    printf("F(%d) = %d\n", n, result);

    result = dpFunction(n);
    printf("F(%d) = %d\n", n, result);
    return 0;
}
