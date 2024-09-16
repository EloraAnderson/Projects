#include <stdio.h>

int main(void) {
    float income, rent, utilities, groceries, transportation, expenses, savings, total;
    float prent, Putilities, Pgroceries, Ptransportation, Pexpenses;

    printf("This is your budget calculator for each month.\n");

    printf("How much do you make each month?\n");
    scanf("%f", &income);

    printf("How much is rent?\n");
    scanf("%f", &rent);

    printf("How much are utilities?\n");
    scanf("%f", &utilities);

    printf("How much are groceries?\n");
    scanf("%f", &groceries);

    printf("How much is transportation?\n");
    scanf("%f", &transportation);

    // Calculate expenses, savings, and total left to spend
    expenses = rent + utilities + groceries + transportation;
    savings = income * 0.2;
    total = income - expenses - savings;

    // Calculate percentage of income spent on each category
    prent = rent / income;
    Putilities = utilities / income;
    Pgroceries = groceries / income;
    Ptransportation = transportation / income;
    Pexpenses = expenses / income;

    // Print results
    printf("Your total expenses are: $%.2f\n", expenses);
    printf("Your income is: $%.2f\n", income);
    printf("Your savings are: $%.2f\n", savings);
    printf("Your total left to spend is: $%.2f\n", total);
    printf("Your rent is: $%.2f (%.2f%% of your income)\n", rent, prent * 100);
    printf("Your utilities are: $%.2f (%.2f%% of your income)\n", utilities, Putilities * 100);
    printf("Your groceries are: $%.2f (%.2f%% of your income)\n", groceries, Pgroceries * 100);
    printf("Your transportation is: $%.2f (%.2f%% of your income)\n", transportation, Ptransportation * 100);
    printf("Your total expenses are: $%.2f (%.2f%% of your income)\n", expenses, Pexpenses * 100);

    return 0;
}