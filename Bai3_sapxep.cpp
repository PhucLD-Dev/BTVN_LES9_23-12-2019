#include <stdio.h>
#include <string.h>
void sapxep(char a[][100],unsigned int n){
	  for (int i=0;i<n-1;i++){
	  	char temp[100];
	  	for (int j=0;j<n-i-1;j++){
	  		if (strcmp(a[j],a[j+1])>0){
	  			strcpy(temp,a[j+1]);
	  			strcpy(a[j+1],a[j]);
	  			strcpy(a[j],temp);
			  }
		  }
	  }
}
int main (){
	int n;
	printf("Nhap so luong chuoi n: ");
	scanf("%d",&n);
	char a[n][100];
	for (int i=0;i<n;i++){
		printf("Nhap chuoi thu %d: ",i+1);
		scanf("%s",a[i]);
	}
	sapxep(a,n);
	printf("Mang sau khi sap xep la:\n");
	for (int i=0;i<n;i++){
		printf("Chuoi thu %d la: %s\n",i+1,a[i]);
	}
	return 0;
}
