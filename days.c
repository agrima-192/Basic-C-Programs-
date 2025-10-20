#include <stdio.h>

int main() {
    int total_days;
    int years, months, days_remaining;

    printf("Enter the total number of days: ");
    scanf("%d", &total_days);

    years = total_days / 365;

    int remaining_after_years = total_days % 365;

    months = remaining_after_years / 30;

    days_remaining = remaining_after_years % 30;

    // Display the result
    printf("Equivalent: %d years, %d months, %d days\n", years, months, days_remaining);

    return 0;
}
