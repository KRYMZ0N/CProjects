#include <stdio.h>
#include <string.h>

int main() 
{
    printf("Welcome to my BuzzFeed Personality test!~\n");
    printf("First question!\n");

    printf("Are you Gay???\n Yes or No!\n");

    char myVariable[99];
    scanf("%s", &myVariable);
    int i = 1;


    while (i > 0) {
        if (strcmp("yes", myVariable) == 0) {
            printf("Cool\n");
            i = 0;
        } else {

            if (strcmp("no", myVariable) == 0) {
            printf("kys\n");
            i = 0;
            }
    
            if (strcmp("no", myVariable) != 0) {
            printf("That was not one of the options retard!\n");
            scanf("%s", &myVariable);
            }
        }

        if (sizeof myVariable > 1) {
            printf("args are too long!\n");
            scanf("%s", &myVariable);
        }
    }
    
    return 0;
}