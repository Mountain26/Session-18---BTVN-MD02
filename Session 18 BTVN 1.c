#include <stdio.h>

struct SinhVien{
	char name[50];
	int age;
	char phoneNumber[15]; 
}; 
int main(){
	fflush(stdin);
	struct SinhVien sv1={"Nguyen Van A", 20, "0812013822"};
	printf("Ten sinh vien: %s\n", sv1.name);
	printf("So dien thoai cua sinh vien: %s\n", sv1.phoneNumber);
	printf("Tuoi sinh vien: %d\n", sv1.age);
}
