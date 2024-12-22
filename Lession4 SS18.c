#include<stdio.h>
struct sinhVien{
	int id;
	char name[25];
	int age;
	char phoneNumbers[25];
};
int main(){
	struct sinhVien sv[50];
	for(int i = 0; i<5; i++){
		printf("Moi nhap thong tin sinh vien thu %d: \n", i+1);
		fflush(stdin);
		printf("Ten: ");
		fgets(sv[i].name, sizeof(sv), stdin);
		printf("Sdt: ");
		fgets(sv[i].phoneNumbers, sizeof(sv), stdin);
		printf("Tuoi: ");
		scanf("%d", &sv[i].age);
		
		
		
	}
	printf("\n");
	for(int i = 0; i<5; i++){
		sv[i].id = i + 1;
		printf("Thong tin sinh vien thu %d\n", i+1);
		printf("%d\n", sv[i].id);
		printf("Ten: %s\n",  sv[i].name);
		printf("Tuoi: %d\n", sv[i].age);
		printf("SDT: %s\n\n", sv[i].phoneNumbers);
	}
}