
#include <stdio.h>

int main(){

int account, beginning, charged, applied, allowed;
int number;

do{

printf("what is the account number? \n");
scanf("%i", &account);

printf("how much was in the beginning of the month? \n");
scanf("%i", &beginning);

printf("what is the total item charged? \n");
scanf("%i", &charged);

printf("total credits applied to this account? \n");
scanf("%i", &applied);

printf("credit limited allowed: \n");
scanf("%i", &allowed);

account =beginning +charged -applied;

if(account>allowed);
printf("exceeded the limit! \n");

printf("the remaining balance is: \n");
scanf("%i", account =beginning +charged +applied -allowed);


return 0;

}while(number==1);

}
