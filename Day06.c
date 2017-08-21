#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://www.hackerrank.com/challenges/30-review-loop

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t;
    scanf("%d", &t);
    for(int counter1=0; counter1<t; ++counter1)
    {
        char s[10000];
        scanf("%d", &t);    //Buffer cleaning
        scanf("%[^\n]", s);
        int counter2;
        for(counter2=0; counter2<strlen(s); counter2=counter2+2)
            printf("%c", s[counter2]);
        printf(" ");
        for(counter2=1; counter2<strlen(s); counter2=counter2+2)
            printf("%c", s[counter2]);
        putchar('\n');
    }
    return 0;
}