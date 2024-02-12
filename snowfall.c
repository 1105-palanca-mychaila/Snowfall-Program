#include <stdio.h>

int main() {

    float inches1, inches2, inches3;
    char day1, day2, day3;
    int date1, date2, date3;

    printf("Enter the first day's data (inches, day, date): ");
    scanf("%f %c %d", &inches1, &day1, &date1);

    printf("Enter the second day's data (inches, day, date): ");
    scanf("%f %c %d", &inches2, &day2, &date2);

    printf("Enter the third day's data (inches, day, date): ");
    scanf("%f %c %d", &inches3, &day3, &date3);

    float total = inches1 + inches2 + inches3;
    float average = total / 3;

    printf("\n  ***Snowfall Table*** \n");

    printf("=============================\n");
    printf("| DATE | WEEKDAY | SNOWFALL |\n");
    printf("|---------------------------|\n");
    printf("|  %d   |   %c    |   %.2f   |\n", date1, day1, inches1);
    printf("|---------------------------|\n");
    printf("|  %d   |   %c    |   %.2f   |\n", date2, day2, inches2);
    printf("|---------------------------|\n");
    printf("|  %d   |   %c    |   %.2f   |\n", date3, day3, inches3);
    printf("|---------------------------|\n");
    printf("| TOTAL |            %.2f   |\n", total);
    printf("|---------------------------|\n");
    printf("| AVG   |            %.2f   |\n", average);
    printf("=============================\n");

    return 0;

}


