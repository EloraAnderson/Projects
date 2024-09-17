#include <stdio.h>
#include <string.h>

int main(void) {
    char name[20], place[20], verb[20], noun[20], sentence[500];
    printf("type a name: ");
    scanf("%s", name);
    printf("type a place: ");
    scanf("%s", place);
    printf("type a verb: ");
    scanf("%s", verb);
    printf("type a noun: ");
    scanf("%s", noun);
    strcat(sentence, name);
    strcat(sentence, " went to the ");
    strcat(sentence, place);
    strcat(sentence, " where they "); 
    strcat(sentence, verb);
    strcat(sentence, " and bought a ");
    strcat(sentence, noun);
    strcat(sentence, ".\n");
    printf("%s", sentence);

    //printf("%s went to the %s where he %s and bought a %s.",name, place, verb, noun);
 return 0;
}