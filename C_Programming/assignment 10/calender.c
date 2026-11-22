#include <stdio.h>

int isLeapYear(int year)
{
    if ((year % 400 == 0) ||
        (year % 4 == 0 && year % 100 != 0))
        return 1;
    return 0;
}

int getFirstDay(int year)
{
    int day = 1; // January 1, 1900 was Monday

    for (int y = 1900; y < year; y++)
    {
        day += isLeapYear(y) ? 366 : 365;
    }

    return day % 7;
}

int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    char *months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    int daysInMonth[] = {
        31, 28, 31, 30,
        31, 30, 31, 31,
        30, 31, 30, 31
    };

    if (isLeapYear(year))
        daysInMonth[1] = 29;

    int firstDay = getFirstDay(year);

    for (int month = 0; month < 12; month++)
    {
        printf("\n\n\t%s %d\n", months[month], year);
        printf("Sun Mon Tue Wed Thu Fri Sat\n");

        for (int i = 0; i < firstDay; i++)
            printf("    ");

        for (int day = 1; day <= daysInMonth[month]; day++)
        {
            printf("%3d ", day);

            if ((firstDay + day) % 7 == 0)
                printf("\n");
        }

        firstDay = (firstDay + daysInMonth[month]) % 7;
        printf("\n");
    }

    return 0;
}