#include <stdio.h>
int i;
int usr;
int main(){
    printf("Write the number you want to use: \n");
    scanf("%d", usr);
    //create a loop that count to 50
    for(i=1;i<51;i++){
        //and replace numbers divisible by 5 and 3 with "fizzbuzz"   
        if(i%3==0 && i%5==0){
            printf("FizzBuzz\n");
        //replace numbers dicisble by 3 with "fizz"
        }else if(i%3==0){
            printf("Fizz\n");
        //replace numbers divisible by 5 with "buzz"
        }else if (i%5==0){
            printf("Buzz\n");
         //those that dont met the criteria will be regular printed numbers
        }else{
            printf("%d\n", i);
        }
    }
    return 0;
}