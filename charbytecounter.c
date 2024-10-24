#include <stdio.h>

void byte_counter(char str[]) {
    for (int i =0; str[i] != 0; i++){
        printf("%d: %c",i,str[i]);
        printf("\n");
    }

}

int main(){
    char str[20];
    fgets(str,20,stdin);
    byte_counter(str);
    printf("����lol");
    return 0;
}