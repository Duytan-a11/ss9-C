#include <stdio.h>

int main(){
    int a[100] = {0};
    int size = sizeof(a) / sizeof(int);
    int choice = 0, dodaibandau = 0, tmp = 0, value = 0;

    while (choice != 6) {
        printf("MENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhap vao so phan tu ma ban muon them vao: ");
                scanf("%d", &dodaibandau);
                if (dodaibandau < 0 || dodaibandau > size) {
                    printf("So phan tu muon nhap vao khong hop le!\n");
                } else {
                    for (int i = 0; i < dodaibandau; i++) {
                        printf("Nhap vao phan tu thu %d: ", i + 1);
                        scanf("%d", &a[i]);
                    }
                    printf("Cac phan tu da duoc nhap xong!\n");
                }
                break;

            case 2:
                printf("Day la mang cua ban: ");
                for (int i = 0; i < dodaibandau; i++) {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;

            case 3:
                if (dodaibandau >= size) {
                    printf("Mang da day, khong the them phan tu!\n");
                } else {
                    int addIndex;
                    printf("Hay chon vi tri ban muon them vao: ", dodaibandau + 1);
                    scanf("%d", &addIndex);
                    if (addIndex < 1 || addIndex > dodaibandau + 1) {
                        printf("Vi tri nhap vao khong hop le!\n");
                    } else {
                        printf("Nhap vao gia tri ban muon them vao: ");
                        scanf("%d", &value);
                       
                        for (int i = dodaibandau; i >= addIndex; i--) {
                            a[i] = a[i - 1];
                        }
                        a[addIndex - 1] = value;
                        dodaibandau++;
                    }
                }
                break;

            case 4:
                {
                    int changeIndex;
                    printf("Chon vi tri ma ban muon sua: ", dodaibandau);
                    scanf("%d", &changeIndex);
                    if (changeIndex < 1 || changeIndex > dodaibandau) {
                        printf("Vi tri nhap khong ton tai!\n");
                    } else {
                        printf("Nhap vao gia tri ban muon sua: ");
                        scanf("%d", &value);
                        a[changeIndex - 1] = value;
                    }
                }
                break;

            case 5:
                {
                    int deleteIndex;
                    printf("Chon vi tri ma ban muon xoa: ", dodaibandau);
                    scanf("%d", &deleteIndex);
                    if (deleteIndex < 1 || deleteIndex > dodaibandau) {
                        printf("Vi tri nhap khong ton tai!\n");
                    } else {
                        for (int i = deleteIndex - 1; i < dodaibandau - 1; i++) {
                            a[i] = a[i + 1];
                        }
                        dodaibandau--;
                    }
                }
                break;

            case 6:
                printf("Chuong trinh ket thuc!\n");
                break;

            default:
                printf("Gia tri nhap vao khong hop le!\n");
        }
        printf("\n");
    }

    return 0;
}
