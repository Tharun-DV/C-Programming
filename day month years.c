#include <stdio.h>

int main()
{
    int mm, dd, yy, ndays, day, leap_years;
    const char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    const char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    
    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &dd, &mm, &yy);
    
    ndays = (long)(30.42 * (mm - 1)) + dd;
    
    if (mm == 2 && yy % 4 == 0) // Leap year
        ndays++;
    else if (mm > 2 && mm < 8)
        ndays--;
    
    yy -= 1900;
    
    leap_years = yy / 4;
    
    ndays += leap_years * 1461;
    
    ndays += (yy % 4) * 365;
    
    if (yy % 4 > 0)
        ndays++;
    
    if (ndays > 59) // February 28th
        ndays--;
    
    day = ndays % 7;
    
    printf("%s, %s %d, %d\n", days[day], months[mm - 1], dd, yy + 1900);
    
    return 0;
}

