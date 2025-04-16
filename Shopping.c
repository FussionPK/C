#include <stdio.h>
#include <string.h>
#include <unistd.h>

typedef struct{
    char sections[45];
    char Name[30];
    int item_ID;
    float prices;
    
}items;

void printMenu(items a){

    printf("Here are our items\n");
    printf("\nThis is %s\nIts named %s\nWith the ID being %d\nEach Item here costs %.2f\n", a.sections,a.Name,a.item_ID,a.prices);
    
}
int main(){

    items Fruits = {"Section One", "Only Apples", 1,4.00};
    
    items Dairies ={"Section Two", "Dairy and Bread", 2,8.00};

    items Meat = {"section Three", "Meat items", 3,9.00};

    items Vegetables = {"Section Four", "Vitamins", 4,3.00};

    for(int i = 0; i<10; i++){
        printf("\nDo you want to view the store? yes or no\n");

        char input[4];

        scanf("%s",&input);

        if(strcmp(input, "yes") == 0){

            printf("Welcome to gankyo!");

            usleep(700000);

            while(1){

            printf("\nWhat section do you want to view inside the store? Fruits,Vegetables,Meat,Dairy or None\n");

            char input_2[20];

            scanf("%s",&input_2);

            if(strcmp(input_2, "Fruits") == 0){

                usleep(500000);
                printf("Loading section info...\n");
                usleep(1000000);
                printMenu(Fruits);
            }
            else if(strcmp(input_2, "Vegetables") == 0){

                usleep(500000);
                printf("Loading section info...\n");
                usleep(1000000);
                printMenu(Vegetables);
            }
            else if(strcmp(input_2, "Meat") == 0){

                usleep(500000);
                printf("Loading section info...\n");
                usleep(1000000);
                printMenu(Meat);
            }
            else if(strcmp(input_2, "Dairy") == 0){

                usleep(500000);
                printf("Loading section info...\n");
                usleep(1000000);
                printMenu(Dairies);
            }
            else if(strcmp(input_2, "None")==0){
                printf("Best CHOICE recieved... GET OUTTA HERE BYE!!!\n");
                break;
            }
            else{
                printf("Input Error please try again...\n");
            }
        }
            }
        else{
            printf("Ok no menu for you! bye bye!\n");
        }break;
    }

}