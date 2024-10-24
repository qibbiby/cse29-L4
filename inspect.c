#include <stdio.h>
#include <string.h>

void inspect(char s[]) {
    int index = 0;
    printf("%s, length %ld: ", s, strlen(s));
    while(s[index] != 0) {
        printf("Byte[%d] : ",index);
        char current = s[index];
        printf("%c (%hhu 0b", current, current);

        //looping over every bit since very bit from the highest order bit is a decreasing power of 2
        for(int place = 128; place > 0; place /= 2) {
            if((current & place) == 0) printf("0");
            else printf("1");
        }
        printf(") ");

        index += 1;
    }
    printf("\n");
}

int main() {
    char input[100];
    fgets(input, 100, stdin);
    printf("\n");
    inspect(input);
}
