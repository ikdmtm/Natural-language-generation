#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//テキストファイルの文字数のカウント
int main(void) {
	int i=0, k=0, j=0,m=0;
	int r[100000];
	char str[100000];
	FILE *inp; 

	inp = fopen("text2.txt","r");

	while((str[i] = fgetc(inp)) != EOF) {
		if(str[i] >= 65 && str[i] <= 90 || str[i] == 32){
			m+=1;
		}
		i++;
	}
	
	printf("count = %d\n", m);
	
	fclose(inp);
	return 0;
}
