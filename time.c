#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    double seconds,minutes,days,years, hours;
    int years1,days1,weeks,months,hours1;

    seconds = time(NULL);
    minutes = seconds / 60;
    hours = minutes / 60;
    days = hours / 24;
    years = days / 365;

    months = (int)(days / 30.42) % 12;
    weeks = ((int)(days / 7)) % 52 - (int)((double)months * 30.42 / 7);
    days1 = days - (years * 365) - (int)((double)months * 30.42) - (weeks * 7);
    hours1 = hours - (days * 24) - (months * 30.42 *24) -
             (weeks * 7 *24) - (days1 *24);

    printf("%d years, ", (int)years);
    printf("%.0d month, ", months);
    printf("%.0d weeks, ", weeks);
    printf("%.0d days, ", days1);
    printf("%.0i hours, ", hours1);

    system("pause");
}
