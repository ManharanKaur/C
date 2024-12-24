#include <stdio.h>
// Basic Bank management system
int main()
{
    float amount = 123.45;
    printf("Your current amount is %.2f \n", amount);
    int transaction, answer;
    float transaction_amt;
    do
    {
        printf("Do you want to make any transaction?(1 / 0)\n");
        scanf("%d", &answer);
        if (answer == 1)
        {
            transaction = 1;
            printf("Press '1' for Deposit and '0' for Withdrawl: \n");
            scanf("%d", &answer);
            if (answer == 1)
            {
                printf("Enter amount to deposit: ");
                scanf("%f", &transaction_amt);
                amount += transaction_amt;
                printf("Your current amount is %.2f \n", amount);
            }
            else if (answer == 0)
            {
                printf("Enter amount to withdraw: ");
                scanf("%f", &transaction_amt);
                if (amount - transaction_amt < 100)
                    printf("Withdrawl failed!");
                else
                {
                    amount -= transaction_amt;
                    printf("Your current amount is %.2f \n", amount);
                }
            }
            else
                printf("Wrong input!");
        }
        else if (answer == 0)
            transaction = 0;
        else
        {
            printf("Wrong input!");
            transaction = 1;
        }
        
    } while (transaction);

    return 0;
}