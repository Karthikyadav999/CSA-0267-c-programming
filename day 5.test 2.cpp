#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAMES 100
#define MAX_LENGTH 50

int compare_names(const void* a, const void* b) {
    const char** name1 = (const char**)a;
    const char** name2 = (const char**)b;
    return strcmp(*name1, *name2);
}

int main() {
    char names[MAX_NAMES][MAX_LENGTH];
    int num_names, i, choice;

    printf("Enter the number of names (up to %d): ", MAX_NAMES);
    scanf("%d", &num_names);

    printf("Enter %d names:\n", num_names);
    for (i = 0; i < num_names; i++) {
        scanf("%s", names[i]);
    }

    printf("\nSorting order:\n1. Ascending\n2. Descending\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        qsort(names, num_names, MAX_LENGTH * sizeof(char), compare_names);
        printf("\nSorted names in ascending order:\n");
    } else if (choice == 2) {
        qsort(names, num_names, MAX_LENGTH * sizeof(char), compare_names);
        printf("\nSorted names in descending order:\n");
        for (i = num_names - 1; i >= 0; i--) {
            printf("%s\n", names[i]);
        }
    } else {
        printf("\nInvalid choice.\n");
        return 1;
    }

    for (i = 0; i < num_names; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
