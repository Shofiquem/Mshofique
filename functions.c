#include <stdio.h>
#include <stdlib.h>

char findGrade(double mark);

int main () {
   double mark;
   char grade;
   printf("Input your grade: \n");
   scanf("%lf", &mark);
   grade = findGrade(mark);
   printf("%c",grade);
   return 0;

}
char findGrade(double mark){

	if (mark >= 90)
		return 'A';

	else if (mark >= 80)
        return 'B';

	else if (mark >= 70)
        return 'C';

	else if (mark >= 60)
		return 'D';

   else return 'F';
}



