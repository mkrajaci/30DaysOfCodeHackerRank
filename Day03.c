#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

/*Task 
Given an integer, N, perform the following conditional actions:

If N is odd, print Weird
If N is even and in the inclusive range of 2 to 5, print Not Weird
If N is even and in the inclusive range of 6 to 20, print Weird
If N is even and greater than 20, print Not Weird
Complete the stub code provided in your editor to print whether or not n is weird.

Input Format
A single line containing a positive integer, n.

Constraints
1 <= N <= 100

Output Format
Print Weird if the number is weird; otherwise, print Not Weird.*/

int main()
{
    int N; 
    scanf("%d",&N);
    
    if (N <= 1 || N <= 100)
    {
        if (!(N % 2==0))
            printf("Weird");
        else if (N % 2 || N >= 2 && N <= 5)
            printf("Not Weird");
        else if (N % 2 || N >= 6 && N <= 20)
            printf("Weird");
        else if (N % 2 || N > 20)
            printf("Not Weird");   
    }
    return 0;
}
