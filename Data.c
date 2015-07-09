#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

int  years, months, weeks, days, hours, seconds;// this is the description
int now=time(NULL);//from 1970

years = now / (60*60*24*365);
now = now % (60*60*24*365);

months = now / ((60*60*24*365)/12);
now = now % ((60*60*24*365)/12);

weeks = now / ((60*60*24*30*365)/7);
now = now % ((60*60*24*30*365)/7);

days = now / ((60*60*24*365)/7);
now = now / ((60*60*24*365)/7);

hours = now / ((60*60*365)/24);
now = now % ((60*60*365)/24);

seconds = now / (60);
now = now % (60);

printf("This is the length of time since 1970\n");
printf(" %d years\n", years);// this will give us the out of the  years with a return
printf(" %d months\n", months);// this will give us the out of the  months with a return
printf(" %d weeks\n", weeks);// this will give us the out of the  weeks with a return
printf(" %d days\n", days);// this will give us the out of the  days with a return
printf(" %d hours\n", hours);// this will give us the out of the  hours with a return


return 0;

getchar;// will pause the screen for it to catch the variable

}
