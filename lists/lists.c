#include <stdio.h>
char siblings[8][20] = {"Ember", "Ashlyn", "Elora", "Cole"};
int i;
int main (){
    for(i=0; i < 4; i++){
        printf("Hello %s\n", siblings[i]);
    }
    return 0;
}