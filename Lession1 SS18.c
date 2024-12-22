#include<stdio.h>
struct sinhVien{
	char name[50];
	int age;
	char phoneNumber[50];
	
};
int main(){
	struct sinhVien sv1 = {"Nguyen Viet Trung", 18, "0336187077"
	};
	printf("Ten sinh vien la: %s\n", sv1.name);
	printf("Tuoi sinh vien la: %d\n", sv1.age);
	printf("So dien thoai cua sinh vien la: %s\n", sv1.phoneNumber);
	return 0;
}