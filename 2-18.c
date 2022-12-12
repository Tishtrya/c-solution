/*
 (Comparing Values) Write a program that asks the user
to enter the highest rainfall ever in one season
for a country, and the rainfall in the current year for
that country, obtains the values from the user, checks if
the current rainfall exceed the highest rainfall and prints
an appropriate message on the screen. If the current 
rainfall is higher, it assigns that value as the highest 
rainfall ever. Use only the single-selection form of the 'if' 
statement you learned in this chapter. 
*/

#include<stdio.h>

// function main begins program execution
int main(void)
{
    // highest rainfall ever in one season for a country:
    int highest; 
    puts("Enter highest rainfall ever in one season for a country:"); // prompt
    scanf("%d", &highest);

    // the rainfall in the current year:
    int currentYear;
    puts("Please enter the rainfall in the current year:"); // prompt
    scanf("%d", &currentYear);

    if (currentYear < highest) {
        printf("Rainfall in the current year is %d that is less ", currentYear);
        printf("than highest rainfall ever(%d)", highest);
        printf(" and the difference between two values is %d\n", highest - currentYear);
    } // end if

    if (currentYear == highest) {
        printf("The highest rainfall ever in one season(%d)", highest);
        printf(" and the rainfall in the current year(%d) is equal!\n", currentYear);
    } // end if

    if (currentYear > highest) {
        printf("The rainfall in the current year(%d) is the highest rainfall ever in one season\n", currentYear);
    } // end if
} // end function main