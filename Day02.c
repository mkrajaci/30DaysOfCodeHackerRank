#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//https://www.hackerrank.com/challenges/30-operators

/*Input Format
There are 3 lines of numeric input: 
The first line has a double, mealCost (the cost of the meal before tax and tip). 
The second line has an integer,  tipPercent (the percentage of mealCost being added as tip). 
The third line has an integer,  taxPercent(the percentage of mealCost being added as tax).

Output Format
Print The total meal cost is totalCost dollars., where totalCost is the rounded integer result of the entire bill (mealCost with added tax and tip).*/

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    float mealCost, tipPercent, taxPercent;
    scanf("%f %f %f", &mealCost, &tipPercent, &taxPercent);
    float tip = mealCost*(tipPercent/100);
    float tax = mealCost*(taxPercent/100);
    float totalCost = mealCost+tip+tax; 
    printf("The total meal cost is %.0f dollars.", totalCost);
    return 0;
}
