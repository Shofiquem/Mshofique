#include<stdio.h>


int main(){

  int gross_salary, hours, hourly;

   printf("Enter  salary:");
   scanf("%d", &hours);

   hours = (7 * hours) / 40;
   hourly = (1.5 * hours) / 40;
   "is hours less than or equal to 40"
   "if yes" hourly rate * hours
   "else" hourly rate * (40) + hourly rate * 1.5 * (hours-40)

   gross_salary = hours+ hourly;

   printf("\nGross salary : %d", gross_salary);

getchar();
return 0;
}




