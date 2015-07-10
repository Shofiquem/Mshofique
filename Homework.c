/*Name: Mohammed Shofique*/
/* Adding two numbers to form three decimal places*/
#include <stdio.h>

int main (void)
{
    double num1; /*stored in the system Num1 that is a variable*/
    double num2; /* stored in the system num2 that is a variable*/
    double sum;/* sum that is equal to the variable*/
    printf("Enter your number:");/* is telling the user to enter there number*/

    scanf("%lf", &num1);/* storing the number */
    scanf("%lf", &num2);/* storing the number */

    sum = num1 + num2;/* adding the variables together to equal the sum */
    printf("The total of the two numbers is %0.3lf", sum); /* telling the user that the sum will stop at three decimal places*/

    getchar(); /* it means that the computer will wait for the user to enter something and it will hold*/

}
