#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

/*Task 
Given an integer, n, print its first 10 multiples. Each multiple n x i (where 1 <= i <= 10) should be printed on a new line in the form: n x i = result.

Input Format
A single integer, n.

Constraints
2 <= n <= 20

Output Format
Print 10 lines of output; each line i (where 1 <= i <= 10) contains the result of n x i in the form: 
n x i = result.*/

int main(){
    int n; 
    scanf("%d",&n);
    if(n <= 2 || n <= 20)
    {
        for(int i = 1; i <= 10; ++i)
            printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;
}
