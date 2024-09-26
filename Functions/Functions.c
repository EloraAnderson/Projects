#include <stdio.h>

void Hello(char name[]){
    printf("Hello %s \n", name);
}

int main(void){
    Hello("Maddie");
    Hello("Cephas");
    Hello("William");
    Hello("Val");
    Hello("Cadence");

    
    return 0;

}