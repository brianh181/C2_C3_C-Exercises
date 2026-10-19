//
// Created by BRIAN.HUANG23 on 10/13/2026.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>


int main() {
    float amount,percentage,tax;
    percentage = 0.05;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    tax = amount * percentage;
    tax = tax + amount;

    printf("With Tax Added: $%.2f \n",tax);

    return 0;

}