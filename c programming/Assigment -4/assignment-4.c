#include <stdio.h>
#include <math.h>

// Function Prototypes
int get_num();
int reverse_inside(int num);
void multiplication_table();
void display_position_value();
void reverse_number();
void Reverse_Square_Reverse();


int main() {
    multiplication_table();
    display_position_value();
    reverse_number();
    Reverse_Square_Reverse();
    return 0;
}


// assignment question - 4
void Reverse_Square_Reverse(){
    printf (" 04. Reverse Square Reverse Number.. \n");

    int num = get_num();
    double square = pow (num, 2);
    int reverse = reverse_inside(num);

    printf (" Reverse of square [%d] = %.3f \n\n\n", reverse,square);
}


// assignment question - 3
void reverse_number(){
    printf ("\n\n\n 03. reverse number for.. \n");
    int num = get_num();
    int reverse = reverse_inside(num);
    printf (" reverse number : %d \n\n\n",reverse);
}

//  reverse's base function
int reverse_inside(int num) {
    int rem, reverse = 0;

    while (num > 0 ){
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num /=10;
    }
    return reverse;
}


// assignment question - 2
void display_position_value() {
    printf("\n\n\n 02. Decompose a number into individual digits.. \n");

    int num = get_num();
    int rem, position = 1;

    while (num > 0 ){
        rem = num % 10;
        num /=10;
        printf ("\n\t %10d's   ---->   %d ", position, rem);
        position*=10;
    }
}


// assignment question - 1
void multiplication_table() {
    printf (" 01. multiplication table for a given number.. \n");

    int num = get_num();
    printf (" multiplication table : %d * 15\n\n", num);

    for (int i = 1; i <= 15; i++){
        printf ("\t %3d  *  %d  =  %3d \n",i, num, i*num);
    }
}

// get number input
int get_num() {
    int num;
    do {
        printf ("Enter number : ");
        if (scanf("%d",&num) == 1){
            break; // Valid input, exit loop
        }
        printf ("Invalid input! Please Enter integer..\n\n");
        while (getchar() != '\n'); // Clear the input buffer
    }while(1);
    return num; // Return the valid integer
}

