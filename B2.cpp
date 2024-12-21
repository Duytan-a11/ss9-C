#include <stdio.h>

int main(){
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("Mang truoc khi sua: ");
	for(int i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	
	int n,giatricansua;
	printf("\nNhap vao vi tri can sua: ");
	scanf("%d", &n);
	printf("Nhap vao gia tri can sua cua mang do: ");	
	scanf("%d", &giatricansua);
	a[n-1]=giatricansua;
	printf("Mang cua ban sau khi sua: ");
	
	for(int i=0;i<10;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
