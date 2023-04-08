#include <stdio.h>
#include <stdlib.h>


struct Customer {
    int account_no;
    char name[50];
    float balance;
};

void print_low_balance_customers(struct Customer bank[], int n) {
    printf("\nCustomers with balance less than 100 Rs:\n");
    for (int i = 0; i < n; i++) {
        if (bank[i].balance < 100.0) {
            printf("%d\t%s\n", bank[i].account_no, bank[i].name);
        }
    }
}

int main() {
    int n = 3;

    struct Customer bank[n];

    for (int i = 0; i < n; i++) {
        printf("Enter details for customer %d:\n", i+1);
        printf("Account Number: ");
        scanf("%d", &bank[i].account_no);
        printf("Name: ");
        scanf("%s", bank[i].name);
        printf("Balance: ");
        scanf("%f", &bank[i].balance);
    }

    print_low_balance_customers(bank, n);

    return 0;
}
