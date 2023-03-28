#include <stdio.h>

int main() {
    int option = 2;
    switch (option) {
        case 1:
            printf("Option 1 selected\n");
            break;
        case 2:
            printf("Option 2 selected\n");
            
        case 3:
            printf("Option 3 selected\n");
            break;
        default:
            printf("Invalid option\n");
            break;
    }
    return 0;
}

