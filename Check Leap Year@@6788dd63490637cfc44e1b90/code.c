#include <stdio.h>
int main() {
    int year;
    scanf("%d", &year);
    if (isLeapYear(year))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);
    return 0;
}