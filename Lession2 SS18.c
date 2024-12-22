#include<stdio.h>

struct sinhVien{
	char name[50];
	int age;
	char phoneNumber[50];
	
};
int main(){
	struct sinhVien sv1;
	printf("Nhap ten sinh vien: ");
	fgets(sv1.name,sizeof(sv1.name),stdin);
	printf("Nhap tuoi sinh vien: ");
	scanf("%d", &sv1.age);
	fflush(stdin);
	printf("Nhap sdt sinh vien: ");
	fgets(sv1.phoneNumber,sizeof(sv1.phoneNumber),stdin);
	printf("\nTen sinh vien la: %s", sv1.name);
	printf("Tuoi sinh vien la: %d\n", sv1.age);
	printf("So dien thoai cua sinh vien la: %s\n", sv1.phoneNumber);
	return 0;
}