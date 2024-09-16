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
   prent = rent/income;
   putilities = utilities/income;
   pgroceries = groceries/ income;
   ptransportation = transportation/income;
   pexpenses = expenses/income;
   printf("your income is: $%.2f\n", income);
   printf("your expenses are: $%.2f\n", expenses);
   printf("your savings are: $%.2f\n", savings);
   printf("your total left to spend is: $%.2f\n", total);
   printf("your rent is %.2f", prent, "of your income");
   printf("your utilities are %.2f", putilities, "of your income");
   printf("your groceries are %.2f", pgroceries, "of your income");
   printf("your transportation is %.2f", ptransportation, "of your income");
   printf("your expenses are %.2f", pexpenses, "of your income");
   return 0;
}