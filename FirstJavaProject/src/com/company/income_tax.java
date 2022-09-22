package com.company;

import java.util.Scanner;

public class income_tax {
    public static void main(String[] args) {
        long income ;
        float tax = 0f;
        System.out.println("Enter your income in INR of per-annum");
        Scanner sc = new Scanner(System.in);
        income = sc.nextLong();
        if (income <= 250000) {
            System.out.println("You lie in less than  ₹ 2.5L which is non-taxable");
        }
        else if (income > 250000 && income <= 500000) {
            tax = tax + 0.05f * (income - 250000);
            System.out.println("You lie in ₹ 2.5L - ₹ 5L slab ");
        }
        else if (income > 500000 && income <= 1000000) {
            tax =  tax + 0.05f * (500000 - 250000);
            tax =  tax + 0.2f * (income - 500000);
            System.out.println("You lie in ₹ 5L - ₹ 10L slab ");
        }
        else if (income > 1000000) {
            tax =  tax + 0.05f * (500000 - 250000);
            tax =  tax + 0.2f * (100000 - 500000);
            tax =  tax + 0.3f * (income - 1000000);
            System.out.println("You lie in above ₹ 10L slab ");
        }
        System.out.println("Your tax is: ₹ " + tax);
    }
}
