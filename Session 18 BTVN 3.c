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
	
	struct SinhVien sv2;
	printf("Moi ban nhap ho va ten: ");
	fgets(sv2.name,sizeof(sv2.name),stdin);
	printf("Moi ban nhap so tuoi: ");
	scanf("%d", &sv2.age);
	fflush(stdin);
	printf("Moi ban nhap so dien thoai: ");
	fgets(sv1.phoneNumber,sizeof(sv2.phoneNumber),stdin);
	
	struct SinhVien sv3;
	printf("Moi ban nhap ho va ten: ");
	fgets(sv3.name,sizeof(sv3.name),stdin);
	printf("Moi ban nhap so tuoi: ");
	scanf("%d", &sv3.age);
	fflush(stdin);
	printf("Moi ban nhap so dien thoai: ");
	fgets(sv3.phoneNumber,sizeof(sv3.phoneNumber),stdin);
	
	struct SinhVien sv4;
	printf("Moi ban nhap ho va ten: ");
	fgets(sv4.name,sizeof(sv4.name),stdin);
	printf("Moi ban nhap so tuoi: ");
	scanf("%d", &sv4.age);
	fflush(stdin);
	printf("Moi ban nhap so dien thoai: ");
	fgets(sv4.phoneNumber,sizeof(sv4.phoneNumber),stdin);
	
	struct SinhVien sv5;
	printf("Moi ban nhap ho va ten: ");
	fgets(sv5.name,sizeof(sv5.name),stdin);
	printf("Moi ban nhap so tuoi: ");
	scanf("%d", &sv5.age);
	fflush(stdin);
	printf("Moi ban nhap so dien thoai: ");
	fgets(sv5.phoneNumber,sizeof(sv5.phoneNumber),stdin);
	
	printf("Ten sinh vien 1: %s\n", sv1.name);
	printf("So dien thoai cua sinh vien 1: %s\n", sv1.phoneNumber);
	printf("Tuoi sinh vien 1: %d\n", sv1.age);
	
	printf("Ten sinh vien 2: %s\n", sv2.name);
	printf("So dien thoai cua sinh vien 2: %s\n", sv2.phoneNumber);
	printf("Tuoi sinh vien 2: %d\n", sv2.age);
	
	printf("Ten sinh vien 3: %s\n", sv3.name);
	printf("So dien thoai cua sinh vien 3: %s\n", sv3.phoneNumber);
	printf("Tuoi sinh vien 3: %d\n", sv3.age);
	
	printf("Ten sinh vien 4: %s\n", sv4.name);
	printf("So dien thoai cua sinh vien 4: %s\n", sv4.phoneNumber);
	printf("Tuoi sinh vien 4: %d\n", sv4.age);
	
	printf("Ten sinh vien 5: %s\n", sv5.name);
	printf("So dien thoai cua sinh vien 5: %s\n", sv5.phoneNumber);
	printf("Tuoi sinh vien 5: %d\n", sv5.age);
}
