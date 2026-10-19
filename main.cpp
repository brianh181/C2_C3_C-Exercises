
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
    int gs1, group, publisher, item, check_digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &group, &publisher, &item, &check_digit);

    printf("GS1 prefix:       %d\n", gs1);
    printf("Group identifier: %d\n", group);
    printf("Publisher code:   %d\n", publisher);
    printf("Item number:      %d\n", item);
    printf("Check digit:      %d\n", check_digit);
    
    return 0;
}


int Exercise3_4() {
    int pnum1,pnum2,pnum3;

    printf("Enter phone number in format (xxx) xxx-xxxx: \n");
    scanf(" (%d) %d-%d", &pnum1, &pnum2, &pnum3);

    printf("You entered %d.%d.%d \n", pnum1, pnum2, pnum3);

    return 0;
}

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