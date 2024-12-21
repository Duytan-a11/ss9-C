#include <stdio.h>

int main(){
	int a[100]={0};
	int dodaihientai;
	printf("So phan tu muon nhap: ");	
	scanf("%d",&dodaihientai);
	for(int i=0;i<dodaihientai;i++){
		printf("Nhap vao phan tu thu %d: ",i+1);
		scanf("%d",a + i);
	}
	
	int phantumuonxoa;
	printf("Nhap vao vi tri phan tu ban muon xoa: ");	
	scanf("%d",&phantumuonxoa);
	if(phantumuonxoa > 0 && phantumuonxoa <= 100){
		dodaihientai--;
		for(int i=phantumuonxoa-1;i<dodaihientai;i++){
			int tmp=a[i+1];
			a[i]=tmp;
		}
		printf("Mang sau khi da xoa phan tu tai vi tri thu %d: ",phantumuonxoa);
		for(int i=0;i<dodaihientai;i++){
			printf("%d ",a[i]);
		}
	}
	return 0;
}
