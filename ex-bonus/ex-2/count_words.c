#include <stdlib.h>
#include <stdio.h>
#include "count_words.h"

int count_words(char *str) {
    int count = 0;
    int in_word = 0;
    int i = 0;
    if (str == 0) {
        return 0;
    }

    while (str[i] != '\0') {
        if (str[i] == ' ')
        {
            in_word = 0;
        }
        else if (in_word == 0)
        {
            in_word = 1;
            count = count + 1;
        }
        i = i + 1;
    }
    return count;
}
