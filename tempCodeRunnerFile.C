#include <stdio.h>

int main() {
    char option;
    char local, destination;
    int alpha, beta, gamma;

    printf("Welcome to our building!\n\n");

    do {
        printf("A. Use Elevator | B. Statistics | C. Elevators inspection | Q. Quit\n");
        printf("Enter option: ");
        scanf(" %c", &option);
        if (option != 'A' && option != 'a' && option != 'B' && option != 'b' && option != 'C' && option != 'c' && option != 'Q' && option != 'q') {
            printf("(ERROR) Invalid option\n\n");
        }
    } while (option != 'A' && option != 'a' && option != 'B' && option != 'b' && option != 'C' && option != 'c' && option != 'Q' && option != 'q');
    
  
   
    do   {
        printf("From? ");
        scanf(" %c", &local);
    } while (local != 'A' && local != 'B' &&  local != 'G' &&  !( local >= '1' && local <= '5'));
    
    switch(local) {
        case 'A':
        case 'G':
        case 'B':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
            printf("To? ");
            scanf(" %c", &destination);
            while (destination != 'A' && destination != 'G' && destination != 'B' && destination != '1' && destination != '2' && destination != '3' && destination != '4' && destination != '5')  {
               
                printf("To? ");
                scanf(" %c", &destination);
            }
            break;
    }
   

    while (local == destination) {
        printf("(ERROR) Are you joking?\n\n");
        do {
            printf("A. Use Elevator | B. Statistics | C. Elevators inspection | Q. Quit\n");
            printf("Enter option: ");
            scanf(" %c", &option);
            if (option != 'A' && option != 'a' && option != 'B' && option != 'b' && option != 'C' && option != 'c' && option != 'Q' && option != 'q') {
              printf("(ERROR) Invalid option\n\n");
            }
        } while (option != 'A' && option != 'a' && option != 'B' && option != 'b' && option != 'C' && option != 'c' && option != 'Q' && option != 'q');
        do   {
        printf("From? ");
        scanf(" %c", &local);
        switch(local) {
        case 'A':
        case 'G':
        case 'B':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
            printf("To? ");
            scanf(" %c", &destination);
            while (destination != 'A' && destination != 'G' && destination != 'B' && destination != '1' && destination != '2' && destination != '3' && destination != '4' && destination != '5')  {
               
                printf("To? ");
                scanf(" %c", &destination);
            }
            break;
    };
    } while (local != 'A' && local != 'B' &&  local != 'G' &&  !( local >= '1' && local <= '5'));
    };
    if (local != destination) {
        printf("Great job!");
    };
 return 0;
}