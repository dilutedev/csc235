#include <stdio.h>
#include <stdlib.h>

int adam_walk_count(char *steps) {
    int count = 0;
    int index = 0;
    while (steps[index]) {
        if (steps[index] == 'U' || steps[index] == 'u') {
            count++;
        } else {
            return count;
        }
        index++;
        continue;
    };
    return count;
}


int main() {
    int test_cases, curr_case = 0;
    FILE *f;
    f = fopen("adam.in", "r");
    if (f == NULL) {
        printf("could not open adam file");
        exit(1);
    }
    fscanf(f, "%d", &test_cases);

    while (curr_case < test_cases) {
        char step_line[100];
        fscanf(f, "%s", step_line);
        int count = adam_walk_count(step_line);
        printf("Case %d: Steps: %d\n", curr_case+1, count);
        curr_case++;
    }
    fclose(f);
    return 0;
}


