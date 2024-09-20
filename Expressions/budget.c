#include <stdio.h>


int main(void) {
   float income, rent, utilities, groceries, transportation, expenses, savings, total;
   float prent, putilities, pgroceries, ptransportation, pexpenses;
   printf("this is going to calculate your budget for the month");
   printf("how much do you make a month?\n");
   scanf("%f", &income);
   printf("your income is: $%.2f\n", income);
   printf("how much is rent?\n");
   scanf("%f", &rent);
   printf("how much are your utilities?\n");
   scanf("%f", &utilities);
   printf("how much are groceries?\n");
   scanf("%f", &groceries);
   printf("how much is transportaion?\n");
   scanf("%f", &transportation);
   expenses = rent+utilities+groceries+transportation;
   savings = income*.2;
   printf("your expenses are: $%.2f\n", expenses);
   total = income - expenses - savings;
   prent = rent/income*100;
   putilities = utilities/income*100;
   pgroceries = groceries/ income*100;
   ptransportation = transportation/income*100;
   pexpenses = expenses/income*100;
   printf("your income is: $%.2f\n", income);
   printf("your expenses are: $%.2f\n", expenses);
   printf("your savings are: $%.2f\n", savings);
   printf("your total left to spend is: $%.2f\n", total);
   printf("your rent is %.2f", "of your income\n", prent);
   printf("your utilities are %.2f", "of your income\n", putilities);
   printf("your groceries are %.2f", "of your income\n", pgroceries);
   printf("your transportation is %.2f", "of your income\n",ptransportation);
   printf("your expenses are %.1f","of your income\n", pexpenses);
   return 0;
}