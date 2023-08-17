#include <stdio.h>

int main()
{
    char user_name[20]; // declaring a 20 size string of characters array
    int products_category; // to store the Number of categories from user

    printf("Hello!\nThis is Sheena, your bot assistant\n"); // Greetings to the user
    printf("Enter your name here: "); // Asking the user name
    scanf("%s", user_name); // taking user name
    printf("Your most welcome %s, what are you looking here:\n", user_name); // greet with their name

    printf("\nHere's are the some list categories of our prpoduct: \n");
    printf("1.AB\t 2.BC\t 3.CD\t 4.EF\t 5.FG\t 6.GH\t 7.HI\t 8.IJ\t 9.JK\t 10.KL\n ");

    printf("Enter the Number(1 to 10) to learn more about these products: ");
    scanf("%d", &products_category);

    switch (products_category)
    {
    case 1:
        printf("This product is about the...");
        break;

    case 2:
        printf("This product is about the...");
        break;
    
    case 3:
        printf("This product is about the...");
        break;
    
    case 4:
        printf("This product is about the...");
        break;
    
    case 5:
        printf("This product is about the...");
        break;
    
    case 6:
        printf("This product is about the...");
        break;
    
    case 7:
        printf("This product is about the...");
        break;
    
    case 8:
        printf("This product is about the...");
        break;
    
    case 9:
        printf("This product is about the...");
        break;
    
    case 10:
        printf("This product is about the...");
        break;
    
    }

    return 0;
} // } main()