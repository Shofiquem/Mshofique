#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  char homeWork = 'Y';
  char weather = 'N';
  char fishingReport[20] = "good";
  double tickets = 55;

  printf("Have you done your homework? (Y/N) \n");
  scanf("%c", &homeWork);
    fflush(stdin);
  printf("Is the weather good? (Y/N) \n");

  scanf("%c", &weather);

  printf("How much do you have? \n");
  scanf("%lf", &tickets);

  if(homeWork == 'Y' && weather == 'Y' && tickets >=55 ){
        printf("You can go fishing today!");

  }else if(homeWork == 'N' || weather == 'Y' && tickets >=55 && fishingReport == "good" ){
   printf("The fishing report is tremendous");
   printf("You may go fishing but you might fail your class due to incomplete assignments!");
  }
  else{
printf("Sorry buddy better luck next time!");

  }
    return 0;
}
