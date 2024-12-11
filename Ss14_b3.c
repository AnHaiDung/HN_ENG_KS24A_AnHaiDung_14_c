#include <stdio.h>

int main(){
	char text[]="an hai dung";
	int size=strlen(text);
	for(int i=size;i>=0;i--){
		printf("%c\n",text[i]);
	}
	return 0;
}
