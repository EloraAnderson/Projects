#include <stdio.h>
#include <stdbool.h>
int main(void){
int age;
printf(" how old are you? ");
scanf("%d", &age);
     if(age >= 18){
        printf(" you are old enough to vote \n");
    }else if (age >=16){
        printf(" you are old enough to drive \n");
    }else if (age >= 15){
        printf(" you are old enough to get your learners permit \n");
    } else if (age >= 5){
        printf(" you are old enough to go to school \n");
    }else{
        printf(" sorry you are too young ");
    }

    return 0;
}