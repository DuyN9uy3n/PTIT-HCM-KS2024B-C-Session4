#include<stdio.h>
int main(){
	int nam;
	printf("nhap nam can kiem tra: ");
	scanf("%d", &nam);
	
	if((nam % 400== 0 ) || ((nam % 4 == 0) && (nam % 100 != 0))){
		printf("nam %d la nam nhuan", nam);
	}
	else{
		printf("nam %d ko phai nam nhuan", nam);
	}
	
	
	return 0;
} 