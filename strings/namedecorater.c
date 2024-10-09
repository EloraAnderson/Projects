#include <stdio.h>

int main(void) {
    char glitter[30],name[50];
    printf("please tell me your name:  ");
    scanf("%s", name );
    strcat(glitter, "<(*~*)>");
    strcat(glitter, name);
    strcat(glitter, "<(*~*)>");
    strcat(glitter, "\n");
    printf("%s", glitter);

return 0;
}