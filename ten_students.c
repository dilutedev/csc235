#include <stdio.h>

void read_student_name(char name[])
{
    printf("%s\n", name);
};

int main() {
    for (int count = 1; count <= 10; count++)
    {
        char name[] = {};
        printf("Please enter student name here: ");
        scanf("%s", name);
        read_student_name(name);
    };
    return 0;
}