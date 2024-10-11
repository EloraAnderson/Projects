#include <stdio.h>
#include <string.h>
#include <time.h>
int i, usr;
char one[50],two[50],three[50];

void delay(int sec){
    int milli = 1000*sec;

    clock_t start = clock();

    while(clock()< start+milli);
}


int main(){
    printf("Write the number you want to use: \n");
    scanf("%d", &usr);
    printf("Give me a word: \n");
    scanf("%s", one);
    printf("Give me another word: \n");
    scanf("%s", two);
    strcat(three, one);
    strcat(three, two);
    //create a loop that count to 50
    for(i=1;i<usr;i++){
        //and replace numbers divisible by 5 and 3 with "fizzbuzz"   
        if(i%3==0 && i%5==0){
            printf("%s\n", three);
        //replace numbers dicisble by 3 with "fizz"
        }else if(i%3==0){
            printf("%s\n", one);
        //replace numbers divisible by 5 with "buzz"
        }else if (i%5==0){
            printf("%s\n", two);
         //those that dont met the criteria will be regular printed numbers
        }else{
            printf("%d\n", i);
        }
        delay(50);
    }
    return 0;
}