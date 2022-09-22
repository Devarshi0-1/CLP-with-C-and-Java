#include <stdio.h>
typedef struct date
{
    int day;
    int month;
    int year;
} date;
int date_comparison(date, date);
void display(date, date);
int main()
{
    int size = 2;
    date din[2];
    for (int counter = 0; counter < 2; counter++)
    {
        printf("Enter the day of Date-%d:\n", counter + 1);
        scanf("%d", &din[counter].day);
        printf("Enter the day of Month-%d:\n", counter + 1);
        scanf("%d", &din[counter].month);
        printf("Enter the day of Year-%d:\n", counter + 1);
        scanf("%d", &din[counter].year);
    }
    display(din[0], din[1]);
    return 0;
}

void display(date dt1, date dt2)
{
    int result;
    printf("Date_1 = %d/%d/%d\n", dt1.day, dt1.month, dt1.year);
    printf("Date_2 = %d/%d/%d\n", dt2.day, dt2.month, dt2.year);
    result = date_comparison(dt1, dt2);
    if (result == 1)
        printf("%d/%d/%d >> %d/%d/%d\n", dt1.day, dt1.month, dt1.year, dt2.day, dt2.month, dt2.year);
    else if (result == -1)
        printf("%d/%d/%d >> %d/%d/%d\n", dt2.day, dt2.month, dt2.year, dt1.day, dt1.month, dt1.year);
    else
        printf("%d/%d/%d == %d/%d/%d\n", dt1.day, dt1.month, dt1.year, dt2.day, dt2.month, dt2.year);
}

int date_comparison(date d1, date d2)
{
    if (d1.year > d2.year)
        return 1;
    else if (d1.year < d2.year)
        return -1;
    else if (d1.month > d2.month)
        return 1;
    else if (d1.month < d2.month)
        return -1;
    else if (d1.day > d2.day)
        return 1;
    else if (d1.day < d2.day)
        return -1;
    return 0;
}