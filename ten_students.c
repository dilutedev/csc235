#include <stdio.h>

void read_student_name(char name[])
{
    printf("%s\n", name);
};

int main() {
    int count;
    for (count= 0; count < 10; ++count)
    {
        printf("%d\n", count);
        // char name[] = {};
        printf("Please enter student name here: ");
        // scanf("%s", name);
        // read_student_name(name);
    };
    return 0;
}