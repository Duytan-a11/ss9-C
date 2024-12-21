#include <stdio.h>

int main(){
	int a[100]={0};
	int size = sizeof(a)/sizeof(int),tmp=0;
	int dodaihientai;	
	printf("Nhap vao so phan tu muon nhap: ");	
	scanf("%d", &dodaihientai);
	
	if(dodaihientai < 0 || dodaihientai > size){
		printf("So phan tu khong hop le!");
		return 0;
	}
	else{
		for(int i=0;i<dodaihientai;i++){
			printf("Nhap vao phan tu thu %d: ",i+1);
			scanf("%d",a + i);
		}
		int addIndex,value;
		printf("Nhap vao vi tri muon them vao mang: ");	
		scanf("%d",&addIndex);
		
		if(addIndex < 0 || addIndex > size){
			printf("Vi tri nhap vao khong hop le!");
		}
		
		else{
		printf("Nhap vao gia tri muon them vao mang: ");	
		scanf("%d",&value);	
			
			if(addIndex >= dodaihientai){
				a[dodaihientai] = value;
				dodaihientai++;
			}
			else{
				dodaihientai++;
				for(int i=addIndex-1;i<dodaihientai;i++){
					tmp=a[i];
					a[i] = value;
					value = tmp;
				}
			}
			
			printf("Mang sau khi them gia tri moi vao vi tri %d la: ",addIndex);
			
			for(int i = 0;i<dodaihientai;i++){
				if(a[i] == '\0')	
				printf("  ");
				else	
				printf("%d ",a[i]);
			}
		}
	}
	return 0;
}
