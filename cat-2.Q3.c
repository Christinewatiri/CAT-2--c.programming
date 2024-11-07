#include <stdio.h>

int main() {
    float hours_worked, hourly_wage;
    float gross_pay, overtime_pay = 0.0, taxes, net_pay;

    
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours_worked);
    printf("Enter hourly wage: ");
    scanf("%f", &hourly_wage);

    // 
    if (hours_worked > 40) {
    
        gross_pay = 40 * hourly_wage;
        
        overtime_pay = (hours_worked - 40) * (1.5 * hourly_wage);
    } else {
        
        gross_pay = hours_worked * hourly_wage;
    }
    gross_pay += overtime_pay;

    
    if (gross_pay <= 600) {
        taxes = gross_pay * 0.15;
    } else {
        taxes = 600 * 0.15 + (gross_pay - 600) * 0.20;
    }

    
    net_pay = gross_pay - taxes;

    
    printf("Gross Pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", net_pay);

    return 0;
}