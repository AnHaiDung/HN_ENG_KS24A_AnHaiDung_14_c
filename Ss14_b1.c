#include <stdio.h>

int main(){
	char text[100];
	printf("nhap chuoi ki tu bat ki : ");
	fgets(text,100,stdin);
	int size=strlen(text);
	printf("%d",size);
	return 0;
}
