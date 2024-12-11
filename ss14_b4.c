#include <stdio.h>

int main(){
	char text[100];
	char findChar;
	int find=0;
	printf("nhap chuoi ki tu ");
	fgets(text,100,stdin);
	int size=strlen(text);
	printf("nhap ki tu ");
	scanf("%c",&findChar);
	for(int i=0;i<size-1;i++){
		if(text[i]==findChar){
			find++;
		}
	}
	printf("%c xuat hien %d trong chuoi",findChar,find);
	return 0;
}
