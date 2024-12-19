#include <stdio.h>

struct SinhVien{
	char name[50];
	int age;
	char phoneNumber[15]; 
}; 
int main(){
	struct SinhVien sv1;
	printf("Moi ban nhap ho va ten: ");
	fgets(sv1.name,sizeof(sv1.name),stdin);
	printf("Moi ban nhap so tuoi: ");
	scanf("%d", &sv1.age);
	fflush(stdin);
	printf("Moi ban nhap so dien thoai: ");
	fgets(sv1.phoneNumber,sizeof(sv1.phoneNumber),stdin);
	printf("Ten sinh vien: %s\n", sv1.name);
	printf("So dien thoai cua sinh vien: %s\n", sv1.phoneNumber);
	printf("Tuoi sinh vien: %d\n", sv1.age);
}
