#include <stdlib.h>
#include <stdio.h>

int str_len(char *str) {
	int i = 0;
	while(str[i] != '\0') {
		printf("%c", str[i]);
		i = i + 1;
	}
	printf("\n");
	return(i);
}

int main(void) {
	char word[50];
	int result;
	printf("Enter a word : ");
	scanf(" %s", word);
	result = str_len(word);
	printf("%d\n", result);
}
