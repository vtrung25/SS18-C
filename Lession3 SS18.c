#include<stdio.h>
struct sinhVien{
	char name[25];
	int age;
	char phoneNumbers[25];
};
int main(){
	struct sinhVien sv[] = {
		{
			"Nguyen Viet Trung",
			18,
			"0336187077"
		},
		{
		  "Nguyen Van Tuan Nam",
		19,
		"0123456789"
		},
		{
		"Nguyen Vu T",
		20,
		"0987654321"
		},
		{
			"Pham Dang Q",
			21,
			"0918273645"
		},
		{
			"Thong Lai Bang",
			22,
			"0246813579"
		}
	};
	for(int i = 0;i<5;i++){
		printf("Thong tin sinh vien %d:\n", i+1);
		printf("Ten: %s\nTuoi: %d\nStd: %s\n\n", sv[i].name, sv[i].age, sv[i].phoneNumbers);
	}
	return 0;
}