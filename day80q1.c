#include <stdio.h>

struct Student {
    char name[30];
    int roll, marks;
};

int main() {
    FILE *fp;
    struct Student s;
    int i, n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    fp = fopen("students.txt", "w");

    for(i = 0; i < n; i++) {
        printf("Enter Name, Roll and Marks: ");
        scanf("%29s %d %d", s.name, &s.roll, &s.marks);
        fprintf(fp, "%s %d %d\n", s.name, s.roll, s.marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    while(fscanf(fp, "%29s %d %d",
          s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               s.name, s.roll, s.marks);
    }

    fclose(fp);
    return 0;
}