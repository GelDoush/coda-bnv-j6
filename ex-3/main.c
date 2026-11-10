#include <stdlib.h>
#include <stdio.h>

void str_rev(char *str) {
    int i = 0;
    while (str[i]!= '\0') {
        i = i + 1;
    }

    int start = 0;
    int end = i - 1;
    while (start<end) {
        char word2 = str[start];
        str[start] = str[end];
        str[end] = word2;
        start = start + 1;
        end = end -1;
    }
}

int main(void) {
    char word[50];
    printf("Enter a word : ");
	scanf(" %s", word);
    str_rev(word);
    printf("%s\n",word);
}