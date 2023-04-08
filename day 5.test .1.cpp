#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int marks[5];
};

int main() {
    struct student s;
    int i;

    printf("Enter student name: ");
    scanf("%s", s.name);

    printf("Enter marks for 5 subjects: \n");
    for(i = 0; i < 5; i++) {
        printf("Subject %d: ", i+1);
        scanf("%d", &s.marks[i]);
    }

    printf("\nStudent details:\n");
    printf("Name: %s\n", s.name);
    printf("Marks: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", s.marks[i]);
    }

    return 0;
}
