// group 8

#include <stdio.h>

void display_menu()
 {
    printf("\n\n0. exit\n");
    printf("1. calculate the sum of two given numbers\n");
    printf("2. calculate the simple interest using SI=(P*T*R)/100\n");
    printf("3. check if a number is +ve or -ve\n");
    printf("4. check if a number is odd or even\n");
    printf("5. find largest among given three different numbers\n");
    printf("6. read n numbers and find their sum\n");
    printf("7. find the sum of series 1+2+3+4+5+...+N\n");
    printf("8. calculate factorial of a given number N\n");
    printf("9. calculate the hcf of two given numbers\n");
    printf("10. calculate the sum of digits in number\n");
    printf("11. reverse the digits of a number\n");
    printf("12. fibonacci series\n");
    printf("13. calcualte the electricity bill\n");
}

void sum_of_two() {
    int a, b;
    printf("enter a number: ");
    scanf("%d", &a);
    printf("enter another number: ");
    scanf("%d", &b);
    int c = a + b;
    printf("%d", c);
}

void simple_interest() {
    int p, t, r;
    printf("enter the principal amount: ");
    scanf("%d", &p);
    printf("enter time: ");
    scanf("%d", &t);
    printf("enter rate: ");
    scanf("%d", &r);
    int si = (p * t * r) / 100;
    printf("simple interest is: %d\n", si);
}

void positive_or_negative() {
    printf("enter a number: ");
    int num;
    scanf("%d", &num);
    if (num == 0) {
        printf("0 is neither negative nor positive\n");
    } else if (num < 0) {
        printf("%d is negative\n", num);
    } else {
        printf("%d is positive\n", num);
    }
}

void odd_or_even() {
    printf("enter a number: ");
    int number;
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("%d is even\n", number);
    } else {
        printf("%d is odd\n", number);
    }
}

void largest_among_3() {
    int a, b, c;
start:
    printf("enter a number: ");
    scanf("%d", &a);
    printf("\nenter 2nd number: ");
    scanf("%d", &b);
    printf("\nenter 3rd number: ");
    scanf("%d", &c);
    if (a == b || a == c || b == c) {
        printf("\ninvalid input: all three numbers must be different. try again!\n");
        goto start;
    }
    if (a > b) {
        if (a > c) {
            printf("%d is largest\n", a);
        } else {
            printf("%d is largest\n", c);
        }
    } else {
        if (b > c) {
            printf("%d is largest\n", b);
        } else {
            printf("%d is largest\n", c);
        }
    }
}

void sum_of_n_numbers() {
    printf("how many numbers do you have?");
    int N;
    scanf("%d", &N);
    int ans = 0;
    int i;
    for (i = 1; i <= N; i = i + 1) {
        int a;
        printf("enter number: ");
        scanf("%d", &a);
        ans = ans +  a;
    }
    printf("the sum of the given numbers is: %d\n", ans);
}

void sum_of_1_to_n() {
    printf("enter number:");
    int n;
    scanf("%d", &n);
    int i = 1;
    int ans = 0;
    while (i <= n) {
        ans = ans + i;
        i = i + 1;
    }
    printf("the sum from 1 to %d is %d\n", n, ans);
}

void factorial() {
    printf("enter number: ");
    int n;
    scanf("%d", &n);
    int ans = 0;
    while (n != 0) {
        ans = ans * n;
        n = n - 1;
    }
    printf("ans = %d", ans); 
}

void hcf() {
	printf("enter the first number:");
	int a;
	scanf("%d", &a);
	printf("enter the second number:");
	int b;
	scanf("%d", &b);
    while (a != b){
        if (a > b){
            a = a - b;
        } else {
            b = b - a;
        }
    }
    printf("the hcf is: %d"); 
}

void sum_of_digits_in_number() {
	int ans = 0;
	printf("enter the number:");
	int a;
	scanf("%d", &a);
	int rem;
	while (a != 0){
		rem = a % 10;
		ans = ans + rem;
		a = a/10;
	}
	printf("the sum is: %d", ans);
}

void reverse_the_digits_of_a_number() {
	int ans = 0;
	printf("enter the number:");
	int a;
	scanf("%d", &a);
	int rem;
	while (a != 0){
		rem = a % 10;
		ans = ans*10 + rem;
		a = a/10;
	}
	printf("the sum is: %d", ans);
}

void fibonacci_series() {
	int a = 0;
	int b = 1;
	printf("enter the number of terms:");
	int n;
	scanf("%d", &n);
	if(n==0)
	{
		printf("invalid");
	}
	else if(n!=0){
	printf("%d, %d, ", a, b);
}
	int i;
	int c;
	for(i=3; i<=n; i=i+1){
		c = a + b;
		a = b;
		b = c;
		printf("%d, ", c);
	}
}

void electricity_bill(){
	int unit, rs;
	printf("enter the unit");
	scanf("%d", &unit);
	if(unit<=20)
	{
		rs = 80;
	}
	else if(unit>20 && unit<=120)
	{rs=80+(unit-20)*8;
	}
	else if(unit>120)
	{rs=80+100+(unit-120)*10;
	}
	printf("the electricity bill of %d unit is %d", unit, rs);
}


int main() {
    int choice;
    do {
        display_menu();
        printf("enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 0: break;
            case 1: sum_of_two(); break;
            case 2: simple_interest(); break;
            case 3: positive_or_negative(); break;
            case 4: odd_or_even(); break;
            case 5: largest_among_3(); break;
            case 6: sum_of_n_numbers(); break;
            case 7: sum_of_1_to_n(); break;
            case 8: factorial(); break;
            case 9: hcf(); break;
            case 10: sum_of_digits_in_number(); break;
            case 11: reverse_the_digits_of_a_number(); break;
            case 12: fibonacci_series(); break;
            case 13: electricity_bill(); break;
            default: printf("invalid choice: try again!");
        }
    } while (choice != 0);
}
