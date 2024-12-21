#include <stdio.h>

int isPrime(int n) {
    if (n < 2) 
	return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) 
		return 0;
    }
    return 1;
}

int main() {
    int a[100] = {0};
    int n = 0, dodaibandau, sum = 0, max, min, tmp;
    while (n != 8) {
        printf("MENU\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra cac gia tri cac phan tu dang quan ly\n");
        printf("3. In ra cac gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
        printf("6. Nhap vao mot so thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &n);
        switch (n) {
            case 1:
                {
                    printf("Phan tu can nhap: ");
                    scanf("%d", &dodaibandau);
                    if (dodaibandau < 0 || dodaibandau > 100)
                        printf("So phan tu nhap vao khong hop le! Vui long nhap trong khoang 1 den 100.\n");
                    else {
                    
                        for (int i = 0; i < dodaibandau; i++) {
                            printf("Nhap vao gia tri phan tu %d: ", i + 1);
                            scanf("%d", &a[i]);
                        }
                        printf("Da nhap xong mang.\n");
                    }
                }
                break;

            case 2:
                {
                    printf("Hien thi gia tri cac phan tu: \n");
                    for (int i = 0; i < dodaibandau; i++) {
                        printf("%d ", a[i]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                printf("Cac phan tu chan trong mang: \n");
                for (int i = 0; i < dodaibandau; i++) {
                    if (a[i] % 2 == 0) {
                        sum += a[i];
                        printf(" Phan tu vi tri thu %d gia tri: %d\n", i + 1, a[i]);
                    }
                }
                printf("Tong cua cac gia tri chan nay la: %d\n", sum);
                break;

            case 4:
                max = a[0], min = a[0];
                for (int i = 0; i < dodaibandau; i++) {
                    if (max <= a[i]) max = a[i];
                    if (min >= a[i]) min = a[i];
                }
                printf("Gia tri lon nhat trong mang la: %d\n", max);
                printf("Gia tri nho nhat trong mang la: %d\n", min);
                break;

            case 5:
                {
                    printf("Cac gia tri so nguyen to trong mang: \n");
                    int countPrime = 0;
                    for (int i = 0; i < dodaibandau; i++) {
                        if (isPrime(a[i])) {
                            printf("Day la phan tu vi tri %d co gia tri: %d\n", i + 1, a[i]);
                            sum += a[i];
                            countPrime++;
                        }
                    }
                    if (countPrime) {
                        printf("Tong cua cac so nguyen to: %d\n", sum);
                    } else {
                        printf("Mang nay khong chua so nguyen to!\n");
                    }
                }
                break;

            case 6:
                {
                    int num = 0, count = 0;
                    printf("Hay nhap vao mot so: ");    
                    scanf("%d", &num);
                    for (int i = 0; i < dodaibandau; i++) {
                        if (num == a[i]) count++;
                    }
                    printf("Mang co tat ca %d phan tu %d\n", count, num);
                    break;
                }

            case 7:
                {
                    int addIndex = 0, value = 0;
                    printf("Hay chon vi tri ban muon them vao: ");    
                    scanf("%d", &addIndex);
                    if (addIndex < 0 || addIndex > 100) {
                        printf("Vi tri nhap vao khong ton tai!\n");
                    } else {
                        printf("Nhap vao gia tri ban muon them vao: ");    
                        scanf("%d", &value);
                        if (addIndex >= dodaibandau) {
                            a[dodaibandau] = value;
                            dodaibandau++;
                        } else {
                            dodaibandau++;
                            for (int i = dodaibandau - 1; i >= addIndex; i--) {
                                a[i] = a[i - 1];
                            }
                            a[addIndex] = value;
                        }
                    }
                }
                break;

            case 8:
                printf("Thoat chuong trinh!\n");
                break;

            default:
                printf("Lua chon khong hop le, vui long chon lai!\n");
        }
        printf("\n");
        sum = 0;
    }
    return 0;
}
