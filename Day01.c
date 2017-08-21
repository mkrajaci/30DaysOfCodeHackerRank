#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://www.hackerrank.com/challenges/30-data-types/problem

int main() 
{
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
	// Declare second integer, double, and String variables.
    int broj;
    double decimalni_broj;
    char niz[100];
    // Read and save an integer, double, and String to your variables.
    scanf("%d", &broj);
    scanf("%lf", &decimalni_broj);
    scanf("%d", &broj); //Clearing buffer
    scanf("%[^\n]", niz);
    // Print the sum of both integer variables on a new line.
    printf("%d\n", broj+i);
    // Print the sum of the double variables on a new line.
    printf("%.1lf\n", decimalni_broj+d);
    // Concatenate and print the String variables on a new line
    printf("%s%s", s, niz);
    // The 's' variable above should be printed first.
	return 0;
}
