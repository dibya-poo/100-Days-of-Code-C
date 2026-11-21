#include <stdio.h>
#include <string.h>

enum Status {SUCCESS, FAILURE, TIMEOUT};

int main() {
    enum Status s;
    char status[20];

    scanf("%19s", status);

    if(strcmp(status, "SUCCESS") == 0)
        s = SUCCESS;
    else if(strcmp(status, "FAILURE") == 0)
        s = FAILURE;
    else if(strcmp(status, "TIMEOUT") == 0)
        s = TIMEOUT;
    else {
        printf("Invalid status");
        return 0;
    }

    switch(s) {
        case SUCCESS:
            printf("Operation successful");
            break;

        case FAILURE:
            printf("Operation failed");
            break;

        case TIMEOUT:
            printf("Operation timed out");
            break;
    }

    return 0;
}