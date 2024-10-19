/*
    Program to Calculate Discount Based on Purchase Amount
*/

#include<stdio.h>

int main()
{
    printf("Program to Calculate Discount Based on Purchase Amount by using *Ladder If Else*\n\n");
    
    float amount, discount, finalAmount;
    
    printf("Enter the purchase amount : ");
    scanf("%f", &amount);
    printf("\n");
    
    if(amount >= 10000)
    {
        discount = 0.20 * amount; 
    }
    else if(amount >= 5000 && amount < 10000)
    {
        discount = 0.10 * amount; 
    }
    else if(amount >= 3000 && amount < 5000)
    {
        discount = 0.05 * amount; 
    }
    else
    {
        discount = 0; 
    }
    
    finalAmount = amount - discount;
    
    printf("Original Amount : %.2f\n", amount);
    printf("Discount Applied : %.2f\n", discount);
    printf("Final Amount to be Paid : %.2f\n", finalAmount);
    
    return 0;
}
