// Enter address (Country, city, block, House no)
#include <stdio.h>
#include <string.h>

struct Address
{
    char Country[20];
    char City[20];
    int Block;
    int House_no;
};

void Printing_Addresses(struct Address address);
int main()
{
    struct Address address[5];

    printf("Enter the details of each person:\n");

    // input from user

    printf("\nEnter the Country of Person 1:");
    scanf("%s", address[0].Country);
    scanf("%s", address[0].City);
    scanf("%d", &address[0].Block);
    scanf("%d", &address[0].House_no);

    printf("\nEnter the Country of Person 2:");
    scanf("%s", address[1].Country);
    scanf("%s", address[1].City);
    scanf("%d", &address[1].Block);
    scanf("%d", &address[1].House_no);

    printf("\nEnter the Country of Person 3:");
    scanf("%s", address[2].Country);
    scanf("%s", address[2].City);
    scanf("%d", &address[2].Block);
    scanf("%d", &address[2].House_no);

    printf("\nEnter the Country of Person 4:");
    scanf("%s", address[3].Country);
    scanf("%s", address[3].City);
    scanf("%d", &address[3].Block);
    scanf("%d", &address[3].House_no);

    printf("\nEnter the Country of Person 5:");
    scanf("%s", address[4].Country);
    scanf("%s", address[4].City);
    scanf("%d", &address[4].Block);
    scanf("%d", &address[4].House_no);

    Printing_Addresses(address[0]);
    Printing_Addresses(address[1]);
    Printing_Addresses(address[2]);
    Printing_Addresses(address[3]);
    Printing_Addresses(address[4]);
} // } int main()

void Printing_Addresses(struct Address address)
{
    printf("\n Addresses of the persons is: %2s, %2s, %2d, %2d ", address.Country, address.City, address.Block, address.House_no);
};