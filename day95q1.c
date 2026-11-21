#include <stdio.h>

struct Student {
    char name[50];
    int roll, marks;
};

struct Student topper(struct Student s[], int n) {
    struct Student top = s[0];
    int i;

    for(i = 1; i < n; i++) {
        if(s[i].marks > top.marks)
            top = s[i];
    }

    return top;
}

int main() {
    struct Student s[100], top;
    int n, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%49s %d %d",
              s[i].name, &s[i].roll, &s[i].marks);
    }

    top = topper(s, n);

    printf("Top Student: %s | Roll: %d | Marks: %d",
           top.name, top.roll, top.marks);

    return 0;
}