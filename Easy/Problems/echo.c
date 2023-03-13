#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
    char word[14];

    printf("This program will repeat the inserted word three times\n");
    printf("Enter a word: ");
    scanf("%s", &word);

    printf("%s %s %s", word, word, word);
    
    return 0;
}
