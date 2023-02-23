void print_remaining_days(int month, int day, int year)
{
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int remaining_days = 0;
    int i;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        days[1] = 29;
    }

    for (i = month - 1; i < 12; i++)
    {
        remaining_days += days[i];
    }
    remaining_days -= day - 1;

    if (day > days[month - 1])
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
    }
    else
    {
        printf("Day of the year: %d\n", day + remaining_days);
        printf("Remaining days: %d\n", 365 + ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) - day - remaining_days + (month > 2));
    }
}
