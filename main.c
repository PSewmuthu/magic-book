#include <stdio.h>
#include <stdlib.h>

void show_menu(){
    printf("----------------------- Menu -----------------------\n\n");
    printf("Iron Man                                         01\n");
    printf("Captain Marvel                                   02\n");
    printf("Spider Man                                       03\n");
    printf("Captain America                                  04\n");
    printf("Hawkeye                                          05\n");
    printf("Black Widow                                      06\n");
    printf("Hulk                                             07\n");
    printf("Doctor Strenge                                   08\n");
    printf("Ant Man                                          09\n");
    printf("Thor                                             10\n\n");
}

int page1(){
    printf("\n---------------------- Page 1 ----------------------\n\n");
    printf("Captain America                                  04\n");
    printf("Hawkeye                                          05\n");
    printf("Ant Man                                          09\n");
    printf("Captain Marvel                                   02\n");
    printf("Spider Man                                       03\n");

    char ans;
    int choice;
    printf("\nIs it here? (t/f) ");
    scanf("%c", &ans);
    printf("\n")

    switch (ans){
    case 't':
        choice = 1;
    default:
        choice = 0;
    }

    return choice;
}

int page2(){
    printf("\n---------------------- Page 2 ----------------------\n\n");
    printf("Hulk                                             07\n");
    printf("Thor                                             10\n");
    printf("Hawkeye                                          05\n");
    printf("Ant Man                                          09\n");
    printf("Black Widow                                      06\n");
    printf("Spider Man                                       03\n");

    char ans;
    int choice;
    printf("\nIs it here? (t/f) ");
    scanf("%c", &ans);
    printf("\n")

    switch (ans){
    case 't':
        choice = 2;
    default:
        choice = 0;
    }

    return choice;
}

int page3(){
    printf("\n---------------------- Page 3 ----------------------\n\n");
    printf("Doctor Strenge                                   08\n");
    printf("Thor                                             10\n");
    printf("Hawkeye                                          05\n");
    printf("Captain Marvel                                   02\n");
    printf("Black Widow                                      06\n");
    printf("Spider Man                                       03\n");

    char ans;
    int choice;
    printf("\nIs it here? (t/f) ");
    scanf("%c", &ans);
    printf("\n")

    switch (ans){
    case 't':
        choice = 3;
    default:
        choice = 0;
    }

    return choice;
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
