#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

int main() {
    struct Student students[50]; 
    int count = 5;

    students[0] = (struct Student){1, "Nguyen Van A", 20, "0123456789"};
    students[1] = (struct Student){2, "Nguyen Van B", 21, "0987654320"};
    students[2] = (struct Student){3, "Nguyen Van C", 22, "0112233441"};
    students[3] = (struct Student){4, "Nguyen Van D", 19, "0667788992"};
    students[4] = (struct Student){5, "Nguyen Van E", 23, "0778899003"};

    struct Student newStudent;
    int position;

    printf("Nhap ID sinh vien: ");
    scanf("%d", &newStudent.id);
    printf("Nhap ten sinh vien: ");
    fflush(stdin);
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = 0;
    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &newStudent.age);
    printf("Nhap so dien thoai sinh vien: ");
    getchar();
    fgets(newStudent.phoneNumber, sizeof(newStudent.phoneNumber), stdin);
    newStudent.phoneNumber[strcspn(newStudent.phoneNumber, "\n")] = 0;

    printf("Nhap vi tri can chen (0 - %d): ", count);
    scanf("%d", &position);

    if (position < 0 || position > count) {
        printf("Vi tri khong hop le!\n");
        return 1;
    }

    for (int i = count; i > position; i--) {
        students[i] = students[i - 1];
    }
    students[position] = newStudent;
    count++;

    printf("\nDanh sach sinh vien sau khi chen:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Ten: %s, Tuoi: %d, SDT: %s\n", 
               students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }

    return 0;
}

