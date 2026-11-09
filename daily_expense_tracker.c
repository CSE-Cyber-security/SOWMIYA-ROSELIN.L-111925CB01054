
#include <stdio.h>

struct Expense {
    char date[20];
    char category[30];
    float amount;
};

int main() {
    struct Expense e[100];
    int choice, count = 0, i;
    float total = 0;

    do {
        printf("\n===== DAILY EXPENSE TRACKER =====\n");
        printf("1. Add Expense\n");
        printf("2. View Expenses\n");
        printf("3. Calculate Total\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                if (count >= 100) {
                    printf("Expense limit reached!\n");
                    break;
                }

                printf("Enter Date (DD-MM-YYYY): ");
                scanf("%19s", e[count].date);

                printf("Enter Category: ");
                scanf("%29s", e[count].category);

                printf("Enter Amount: ");
                scanf("%f", &e[count].amount);

                if (e[count].amount < 0) {
                    printf("Invalid amount!\n");
                    break;
                }

                total += e[count].amount;
                count++;

                printf("Expense Added Successfully!\n");
                break;

            case 2:
                printf("\n--- Expense Details ---\n");

                for(i = 0; i < count; i++) {
                    printf("\nDate: %s", e[i].date);
                    printf("\nCategory: %s", e[i].category);
                    printf("\nAmount: Rs. %.2f\n",
                           e[i].amount);
                }
                break;

            case 3:
                printf("\nTotal Expenses: Rs. %.2f\n",
                       total);
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}
