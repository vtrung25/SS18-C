#include<stdio.h>
struct sinhVien{
	int id;
	char name[50];
	int age;
	char phoneNum[25];
	
		
	
};
int main(){
	struct sinhVien sinhVienlist[50] = {
		{1,"Nguyen Viet T",18,"0123456789"
		},
		{2,"Nguyen Duc T",18,"0987654321"
		},
		{3,"Nguyen Tung A",18,"013579"
		},
		{4,"Nguyen Gia B",18,"02468"
		},
		{5,"Vu Van D",18,"097531"
		},
	};
	int currentSize = 5;
	int a;
	struct sinhVien newSinhVien;
	printf("Nhap vi tri can chen: ");
	scanf("%d", &a);
	if(a<0||a>currentSize){
		printf("Vi tri chen khong hop le");
		return 1;
	}
	printf("Nhap thong tin sinh vien moi:\n");
    printf("ID: ");
    scanf("%d", &newSinhVien.id);
    fflush(stdin);
    printf("Ten: ");
    fgets(newSinhVien.name, sizeof(newSinhVien.name), stdin);
   
    scanf("%d", &newSinhVien.age);
    
    printf("So dien thoai: ");
    fgets(newSinhVien.phoneNum, sizeof(newSinhVien.phoneNum), stdin);
    for(int i = currentSize; i>a;i--){
    	sinhVienlist[i]=sinhVienlist[i-1];
	}
	sinhVienlist[a]=newSinhVien;
	currentSize++;
	for (int i = 0; i < currentSize; i++) {
        printf("ID: %d, Ten: %s, Tuoi: %d, So dien thoai: %s\n",
               sinhVienlist[i].id, sinhVienlist[i].name, sinhVienlist[i].age, sinhVienlist[i].phoneNum);
    }

    return 0;
}
	