#include <stdio.h>

int main() {
    FILE *fp;
    int ch;
    int vowels = 0, consonants = 0;

    fp = fopen("text.txt", "r");

    if(fp == NULL) {
        printf("File not found");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF) {
        if((ch >= 'A' && ch <= 'Z') ||
           (ch >= 'a' && ch <= 'z')) {

            if(ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' ||
               ch == 'O' || ch == 'U')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    fclose(fp);
    return 0;
}