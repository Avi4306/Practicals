/*Create a structure named Item that has members namely Item_name, Quantity, Price and Amount. Implement a user defined function
that takes Read Item_name, Quantity and Price as input and calculate Amount = Quantity*Price and print the same as output*/
#include <stdio.h>

struct Item
{
    char Item_name[20];
    int Quantity;
    float Price;
    float Amount;
};
void read(struct Item I)
{
    getchar();
    printf("Enter Item name:\n");
    fgets(I.Item_name, sizeof(I.Item_name), stdin);
    printf("Enter Quantity:\n");
    scanf("%d", &I.Quantity);
    printf("Enter Price:\n");
    scanf("%f", &I.Price);
    I.Amount = (I.Quantity)*(I.Price);
    printf("Item name: %s\n", I.Item_name);
    printf("Quantity: %d\n", I.Quantity);
    printf("Price: %.2f\n", I.Price);
    printf("Amount: %.2f\n", I.Amount);
    printf("\n\n");
}

int main()
{
    int N;
    printf("Enter number of items:\n");
    scanf("%d", &N);
    struct Item I[N];
    for (int i = 0; i < N; i++)
    {
        read(I[i]);
    }
    
    return 0;
}