#include <stdio.h>
#include <string.h>

enum Gender {MALE, FEMALE};

struct Person {
    enum Gender gender;
};

int main() {
    struct Person p;
    char gender[20];

    scanf("Gender=%19s", gender);

    if(strcmp(gender, "MALE") == 0)
        p.gender = MALE;
    else if(strcmp(gender, "FEMALE") == 0)
        p.gender = FEMALE;
    else {
        printf("Invalid gender");
        return 0;
    }

    if(p.gender == MALE)
        printf("Male");
    else
        printf("Female");

    return 0;
}