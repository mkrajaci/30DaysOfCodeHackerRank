#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

// https://www.hackerrank.com/challenges/30-arrays

int main(){
    int n; 
    scanf("%d", &n);
    int *arr = malloc(sizeof(int) * n);
    int arr_i;
    for(arr_i = 0; arr_i < n; arr_i++)
    {
       scanf("%d",&arr[arr_i]);
    }
    --n;
    for(; n>=0; --n)
        printf("%d ", arr[n]);
    return 0;
}