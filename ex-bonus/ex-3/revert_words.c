#include <stdlib.h>
#include <stdio.h>
#include "revert_words.h"

void revert_words(char *str) {
    if (str==0) {
        return;
    }
    
    int i = 0;
    while (str[i]) {
        i=i+1;
    }

    while (i >= 0) {
        if (i == 0 || str[i - 1] == ' ') {
            if (str[i] != ' ') {
                int j = i;
                while (str[j] && str[j] != ' ') {
                    printf("%c", str[j]);
                    j=j+1;
                }
                printf(" ");
            }
        }
        i=i+1;
    }
    printf("\n");
}