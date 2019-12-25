#include <stdio.h>
#include <string.h>
int main(){
	char s1[50],s2[50];
	printf("Nhap chuoi 1:\n");
	scanf("%s",s1);
	printf("Nhap chuoi 2:\n");
	scanf("%s",s2);
	if(strlen(s1)< strlen(s2)){
		int i = 0;
		for (i = 0; i < strlen(s2); ++i)
		{	
			int j=0;
			for ( j = 0; j < strlen(s1); ++j)
			{
				if(s2[i+j] != s1[j]){
					break;	
				}
			}
			if(j>= strlen(s1)){
				printf("%s nam trong %s\n",s1,s2);
				break;
			}
		}
		if(i>= strlen(s2)){
			printf("%s khong nam trong %s\n",s1,s2);
		}
	}

	return 0;
}
