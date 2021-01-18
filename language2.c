#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//アルファベットごとに数をカウント
int main(void) {
	int i=0, k=0, j=0;
	char str[100000];
	int alpha[26] = {};
	FILE *out,*inp; 

	inp = fopen("text2.txt","r");
	while((str[i] = fgetc(inp)) != EOF) {
		for(k=0; k<=26; k++){
			if(str[i]==k+64){
				alpha[k] = alpha[k] + 1;
			}else if(str[i]==k+32){
				alpha[0] = alpha[0] + 1;
			}
		}	
		i++;			
	}
	
	for(j=0; j<=26; j++){
		printf("%d ", alpha[j]);
	}
	printf("\n");

	fclose(inp);
	return 0;
}

