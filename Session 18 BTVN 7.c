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

    char deleteStudents[50];
    printf("Nhap ten sinh vien can xoa: ");
    fgets(deleteStudents, sizeof(deleteStudents), stdin);
    
    deleteStudents[strcspn(deleteStudents, "\n")] = 0;

    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(students[i].name, deleteStudents) == 0) {
            found = 1;
            for (int j = i; j < count - 1; j++) {
                students[j] = students[j + 1];
            }
            count--;
            break;
        }
    }
    if (found != 0) {
        printf("Sinh vien '%s' da duoc xoa thanh cong.\n", deleteStudents);
    } else {
        printf("Sinh vien '%s' khong ton tai.\n", deleteStudents);
    }

    printf("\nDanh sach sinh vien sau khi xoa:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d, Ten: %s, Tuoi: %d, SDT: %s\n", 
               students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }

    return 0;
}

