#include <stdio.h>
#include <string.h>
bool kt(char a1[],char a2[]){
		int z=0,max=0;
		for (int j=0;j<strlen(a1);j++){
			if (a1[j]==a2[z]){
				z++;
				if (z>max){
					max=z;
				}
			} else {
				z=0;
			}
		}
		if (max==strlen(a2)){
			return true;
		}
	return false;
}
int main (){
	char x1[50],x2[50];
	printf("Nhap vao chuoi x1: ");
	scanf("%s",x1);
	printf("Nhap vao chuoi x2: ");
	scanf("%s",x2);
	if (kt(x1,x2)){
		printf("Chuoi x2 co nam trong x1.");
	} else {
		printf("chuoi x2 khong nam trong x1.");
	}
	return 0;
}
