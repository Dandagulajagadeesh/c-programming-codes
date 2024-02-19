#include <stdio.h>

int main() {
    int category, item;

    printf("Press 1 for tiffin\n");
    printf("Press 2 for fast food\n");

    printf("Enter category no: ");
    scanf("%d", &category);

    if (category == 1) {
        printf("Press 1 for idli\n");
        printf("Press 2 for dosa\n");
        printf("Press 3 for poori\n");
        printf("press 4 for voda\n");
        printf("press 5 for upma\n");
        
        printf("Enter item no: ");
        scanf("%d", &item);

        if (item == 1)
            printf("You ordered idli");
        else if (item == 2)
            printf("You ordered dosa");
        else if (item == 3)
            printf("You ordered poori");
        else if (item ==4)
        printf("you ordered voda");
        else if (item==5) 
        printf("you ordered upma");
        else
            printf("Invalid option");
        }
    else if (category == 2) 
	    {
        printf("Press 1 for noodles\n");
        printf("Press 2 for manchuria\n");
        printf("Press 3 for fried rice\n");

        printf("Enter item no: ");
        scanf("%d", &item);

        if (item == 1)
            printf("You ordered noodles");
        else if (item == 2)
            printf("You ordered manchuria");
        else if (item == 3)
            printf("You ordered fried rice");
        else
            printf("Invalid option");
        }
       else
	    {
        printf("Invalid category");
        }

    return 0;
        }

