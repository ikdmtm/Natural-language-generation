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
	while((str[i] = fgetc(inp)) != EOF) { //ファイルの文字を一文字づつ終端まで読み込み
		for(k=0; k<=26; k++){
			if(str[i]==k+64){
				alpha[k] = alpha[k] + 1; //スペースはalphabet[0]に、a～zはalphabet[1～26]にプラスしてカウント
			}else if(str[i]==k+32){
				alpha[0] = alpha[0] + 1;
			}
		}	
		i++;			
	}
	
	printf(" , a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z\n");
	for(j=0; j<=26; j++){
		printf("%d ", alpha[j]); //カウントした数を表示
	}
	printf("\n");

	fclose(inp);
	return 0;
}

