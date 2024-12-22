#include <stdio.h>
#include <string.h>

struct SinhVien {
    char id[20];
    char name[20];
    int age;
    char phoneNumber[15];
};

void updateSinhVien(struct SinhVien *sinhVien, int n, char findById[]);

int main() {
    struct SinhVien sv[50] = {
        {"abc01", "nguyen van a", 17, "0812013822"},
        {"abc02", "nguyen van b", 18, "0914301332"},
        {"abc03", "nguyen van c", 19, "0882838232"},
        {"abc04", "nguyen van d", 20, "0129323093"},
        {"abc05", "nguyen van e", 99, "01293029030"}
    };
    
    char findById[20];
    printf("Moi ban nhap id cua sinh vien can update: ");
    fgets(findById, sizeof(findById), stdin);
    
    
    updateSinhVien(sv, 5, findById);
    
    return 0;
}

void updateSinhVien(struct SinhVien *sinhVien, int n, char findById[]) {
    int flag = -1;
    
    for (int i = 0; i < n; i++) {
        if (strcmp(findById, sinhVien[i].id) == 0) {
            flag = i;
            break;
        }
    }
    
    if (flag == -1) {
        printf("Khong co id thoa man\n");
    } else {
        strcpy(sinhVien[flag].name, "Nguyen Dinh S");
        printf("Ten sinh vien moi la: %s\n", sinhVien[flag].name);
    }
}

