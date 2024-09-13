#include <stdio.h>

int main(void) {
    float income,rent,utillities,groceries,transportation, expenses, savings, total;
    float prent, Putilities, Pgroceries, Ptransportation, pexpences;
    printf("this is your budget calculator for each month");
    printf("how much do you make each month?\n");
    scanf("%f" , &income);
    printf("how much is rent?\n");
    scanf("%f", &rent);
    printf("how much is utilities?\n");
    scanf("%f", &utillities);
    printf("how much are groceries?\n");
    scanf("%f", &groceries);
    printf("how much is transportation?\n");
    scanf("%f", &transportation); 
    expenses = rent + utillities + groceries + transportation + expenses + savings + total;
    savings = income * .2;
    total = income - expenses - savings;
    prent = rent/income;
    Putilities = utillities/income;
    Pgroceries = Pgroceries/income;
    Ptransportation = Ptransportation/income;
    pexpences = pexpences/income;
    printf("your expenses is:$%.2f\n",expenses);
    printf("your income is: $%.2f\n", income);
    printf("your savings is: $%.2f\n", savings);
    printf("your total left to spend is: $%.2f\n", total);
    printf("your rent is: $%.2f\n", rent, "of your income");  
    printf("your utilities is: $%.2f\n", utillities); 
    printf("your groceries is: $%.2f\n", groceries);
    printf("your transportation is: $%.2f\n", transportation);
return 0;
}