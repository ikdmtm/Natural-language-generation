#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//乱数を生成し、テキストファイルから乱数番目の文字を出力
int main(void) {
	int i=0, k=0, j=0,m=8177;
	int r[100000];
	char str[100000];
	char str1[100000];
	FILE *inp, *out; 
	inp = fopen("text2.txt","r");
	out = fopen("text3.txt","w");

	srand((unsigned)time(NULL));
	for(i=0;i<=m;i++){
		r[i] = rand()%(m+1);
	}
	
	while((str[j] = fgetc(inp)) != EOF) {
		j++;
	}
	
	for(j=0;j<=m;j++){
		str1[j] = str[r[j]];
	}
	
	printf("count = %d\n", m);
	fprintf(out, "%s", str1);

	fclose(inp);
	fclose(out);
	return 0;
}
