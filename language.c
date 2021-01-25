#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int i=0;
	char str[10000];
	FILE *out,*inp; 

	inp = fopen("text1.txt","r");
	out = fopen("text2.txt","w");

	//ファイル終端まで１文字づつ読み込む
	while((str[i] = fgetc(inp)) != EOF) {
		if(str[i] >= 65 && str[i] <= 90 || str[i] == 32 || str[i] == 10){ //アルファベット大文字、スペース、改行ならそのまま
		}else if(str[i] >= 97 && str[i] <= 122){ //アルファベット小文字なら大文字に
			str[i] = str[i]-32;
		}else{
			str[i] = 32; //それ以外はすべてスペースに変換
		}
		i++;
	}
	fprintf(out,"%s",str); //書き込む
	
	fclose(inp);
	fclose(out);
	return 0;
}
