
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

int Exercise2_4() {
    float amount,percentage,tax;
    percentage = 0.05;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    tax = amount * percentage;
    tax = tax + amount;

    printf("With Tax Added: $%.2f \n",tax);

    return 0;
}

int Exercise2_5() {
    float x, answer;

    printf("f(x) = (3x^5) + (2x^4) - (5x^3) - (x^2) + 7x - 6 \n "
           "Enter a value for x:   ");
    scanf("%f", &x);


    //breaking it apart for better readability
    answer = 3*x*x*x*x*x; //3x^5
    answer = answer + 2*x*x*x*x; //2x^4
    answer = answer -5*x*x*x; // -5x^3
    answer = answer -1*x*x; // -x^2
    answer = answer + 7*x; //7x
    answer = answer - 6; // - 6

    printf("f(%f) = %f\n", x, answer);
    return 0;
}

int Exercise3_3() {
    char ISBN[18];
    printf("Enter ISBN: \n");
    fgets(ISBN, sizeof(ISBN), stdin);

    char GS1[4];
    for (int i = 0; i == 2; i++) {
        char temp = ISBN[i];
        printf("%c \n", temp);
    }



}


int Exercise3_4() {

}

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

//int main() {
//    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.
//
//    const auto lang = "C++";
//    std::cout << "Hello and welcome to " << lang << "!\n";
//
//    for (int i = 1; i <= 5; i++) {
//        // TIP Press <shortcut actionId="Debug"/> to start debugging your code. We have set one <icon src="AllIcons.Debugger.Db_set_breakpoint"/> breakpoint for you, but you can always add more by pressing <shortcut actionId="ToggleLineBreakpoint"/>.
//        std::cout << "i = " << i << std::endl;
//    }
//
//    return 0;
//    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
//}

int main() {
    int choices[] = {1,2,3,4};
    int choice;

    printf("Choose an option [1] Ch.2 Ex. 4, [2] Ch. 2 Ex. 5, [3] Ch. 3 Ex.3, [4] Ch. 3 Ex. 4:  ");
    scanf("%d",&choice);

    if (choice == 1) {
        Exercise2_4();
    }
    if (choice == 2) {
        Exercise2_5();
    }
    if (choice == 3) {
        Exercise3_3();
    }
    if (choice == 4) {
        Exercise3_4();
    }
    return 0;
}