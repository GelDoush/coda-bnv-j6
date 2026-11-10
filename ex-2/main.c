#include <stdlib.h>
#include <stdio.h>

int str_cmp(char *str1, char *str2){
	int i=0;
	while(str1[i] != '\0' && str2[i] != '\0') {
		if (str1[i] != str2[i]) {
			return(0);
		}
		i = i + 1;
	}
	if (str1[i] == '\0' && str2[i] == '\0') {
		return(1);
	}
	return(0);
}

int main(void) {
	char word1[50];
	char word2[50];
	int result;
	printf("Enter a word : ");
	scanf(" %s", word1);
	
	printf("Enter another word : ");
	scanf(" %s", word2);
	result = str_cmp(word1,word2);
	printf("%d\n", result);
}