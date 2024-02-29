#include <stdio.h>
#include <string.h>

int main() {
    char correctpassword[] = "jagadeesh9";
    char enterpassword[20];

    while (1)
	 {
        printf("Enter password: ");
        scanf("%s", enterpassword);

        if (strcmp(enterpassword, correctpassword) == 0) 
		{
            printf("Correct password\n");
            break;
        } 
		else
		 {
            printf("Incorrect password\n");
        }
    }

    return 0;
}







    
    

   
   
   













