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

int page4(){
    printf("\n---------------------- Page 4 ----------------------\n\n");
    printf("Iron Man                                         01\n");
    printf("Ant Man                                          09\n");
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
        choice = 4;
    default:
        choice = 0;
    }

    return choice;
}

void result(sum){
    printf("\n---------------------- Result ----------------------\n");

    if sum == 1{
        printf("\nYou have think,\n     Captain America          04\n\n");
    } else if sum == 2{
        printf("\nYou have think,\n     Hulk                     07\n\n");
    } else if sum == 3{
        printf("\nYou have think,\n     Doctor Strenge           08\n\n");
    } else if sum == 4{
        printf("\nYou have think,\n     Iron Man                 01\n\n");
    } else if sum == 5{
        printf("\nYou have think,\n     Thor                     10\n\n");
    } else if sum == 6{
        printf("\nYou have think,\n     Hawkeye                  05\n\n");
    } else if sum == 7{
        printf("\nYou have think,\n     Ant Man                  09\n\n");
    } else if sum == 8{
        printf("\nYou have think,\n     Captain Marvel           02\n\n");
    } else if sum == 9{
        printf("\nYou have think,\n     Black Widow              06\n\n");
    } else{
        printf("\nYou have think,\n     Spider Man               03\n\n");
    }

    printf("------------------------- End -------------------------\n\n");
}

int main()
{
    show_menu();
    char mind;
    printf("Did you keep in mind an item? (t/f) ");
    scanf("%c", &mind);

    if mind == 't'{
        int ans1, ans2, ans3, ans4;

        ans1 = page1();
        ans2 = page2();
        ans3 = page3();
        ans4 = page4();

        result(ans1 + ans2 + ans3 + ans4);
    }else{
        printf("Magic book is closing...")
    }

    return 0;
}
