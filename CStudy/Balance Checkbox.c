#include <stdio.h>


int main(void)
{
    float balance, debit, credit;
    int cmd;

    printf("**** ACME checkbook-balancing program ****\n");
    printf("Commands: 0 = clear, 1 = credit, 2 = debit, 3 = show balance, 4 = exit\n");
    for (;;){
        printf("Enter command: ");
        scanf("%d", &cmd);
        switch (cmd) { 
            case 0: balance = 0.0f; break;
            case 1: printf("Enter ammount: "); scanf("%f", &credit); balance += credit; break;
            case 2: printf("Enter ammount: "); scanf("%f", &debit); balance -= debit; break;
            case 3: printf("Balance: $%f\n", balance); break;
            case 4: printf("Exiting...\n"); return 0;

        }


    }


}