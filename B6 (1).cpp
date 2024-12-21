#include <stdio.h>

int main(){
	int matrix[100][100]={0},n=0,m=0;
	int choice=0,sum=0;
	long long giatritich = 1;
	while(choice != 8){
		printf("MENU\n");
		printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
		printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
		printf("3. In gia tri cac phan tu la le va tinh tong\n");
		printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
		printf("5. In ra cac phan tu nam tren duong cheo chinh\n");
		printf("6. In ra cac phan tu nam tren duong cheo phu\n");
		printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
		printf("8. Thoat\n");
		printf("Lua chon cua ban: ");	
		scanf("%d",&choice);
		switch(choice){
			case 1:
				{
					printf("Moi nhap vao kich co cua hang: ");	
					scanf("%d",&n);
					printf("Moi nhap vao kich co cua cot: ");	
					scanf("%d", &m);
					if(m < 1 || m > 100 || n < 1 || n > 100){
						printf("Du lieu nhap vao khong hop le, vui long nhap lai!");
					}
					else{
						for(int i=0;i<n;i++){
							for(int j=0;j<m;j++){
								printf("matrix[%d][%d]: ",i+1,j+1);
								scanf("%d",&matrix[i][j]);
							}
						}
						printf("Da hoan thanh viec nhap du lieu!");
					}
				}
				break;
			case 2:
				{
					printf("Day la ma tran cua ban:\n");
					for(int i=0;i<n;i++){
						for(int j=0;j<m;j++){
						printf("%d  ",matrix[i][j]);
						}
					printf("\n");
					}
				}
				break;
			case 3:
				{
					printf("Cac phan tu la so le: ");
					for(int i=0;i<n;i++){
						for(int j=0;j<m;j++){
							if(matrix[i][j] % 2 != 0){
								printf("%d ",matrix[i][j]);
								sum += matrix[i][j];
							}
						}
					}
					printf("\nTong cac phan tu so le: %d",sum);
				}
				break;
			case 4:
				{
					printf("Cac phan tu nam tren duong bien:\n");
					for(int i=0;i<n;i++){
						for(int j=0;j<m;j++){
							if(i == 0 || j == 0 || i == n - 1 || j == n - 1){
								printf("%d  ",matrix[i][j]);
								giatritich *= matrix[i][j];
							}
							else	
							printf("   ");
						}
						printf("\n");
					}
					printf("Tich cac phan tu nam tren duong bien: %lld",giatritich);
				}
				break;
			case 5:
				{
					printf("Cac phan tu nam tren duong cheo chinh:\n");
					for(int i=0;i<n;i++){
						for(int j=0;j<m;j++){
							if(i == j)	
							printf("%d  ",matrix[i][j]);
							else	
							printf("   ");
						}
						printf("\n");
					}
				}
				break;
			case 6:
				{
					printf("Cac phan tu nam tren duong cheo phu:\n");
					for(int i=0;i<n;i++){
						for(int j=0;j<m;j++){
							if(i == 3-j-1)	
							printf("%d  ",matrix[i][j]);
							else	
							printf("   ");
						}
						printf("\n");
					}
				}
				break;
			case 7:
				{
					int tongmang[n]={0};
					int max=0,sodong=0;
					for(int i=0;i<n;i++){
						max = tongmang[0];
						for(int j=0;j<m;j++){
							tongmang[i]+=matrix[i][j];
						}
						if(max <= tongmang[i]){
							max = tongmang[i];
							sodong = i;
						}
					}
					printf("Dong co tong gia tri cac phan tu lon nhat la:\n");
					for(int j=0;j<m;j++){
						printf("%d ",matrix[sodong][j]);
					}
					printf("\nTong cua dong nay la: %d",max);
				}
		}
		printf("\n");
		sum=0,giatritich=1;
	}
	return 0;
}
