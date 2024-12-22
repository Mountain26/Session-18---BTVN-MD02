#include <stdio.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student students[50]; 
    int count = 5;

    students[0] = (struct Student){14, "Nguyen Van A", 20, "0123456789"};
    students[1] = (struct Student){22, "Nguyen Van B", 21, "0987654320"};
    students[2] = (struct Student){12, "Nguyen Van C", 22, "0112233441"};
    students[3] = (struct Student){12, "Nguyen Van D", 19, "0667788992"};
    students[4] = (struct Student){13, "Nguyen Van E", 23, "0778899003"};

    if (count < 50) {
        printf("Nhap ID sinh vien: ");
        scanf("%d", &students[count].id);
        printf("Nhap ten sinh vien: ");
        scanf(" %[^\n]", students[count].name);
        printf("Nhap tuoi sinh vien: ");
        scanf("%d", &students[count].age);
        printf("Nhap so dien thoai sinh vien: ");
        scanf("%s", students[count].phoneNumber);
        count++;
    } else {
        printf("Mang sinh vien da day!\n");
    }

    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Ten: %s, Tuoi: %d, SDT: %s\n", 
               students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }

    return 0;
}

