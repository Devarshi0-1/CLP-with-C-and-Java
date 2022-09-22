package com.company;

import java.util.Scanner;

public class print_odd_numbers {
    public static void main(String[] args) {
        int odd = 0, limit, even = 0;
        System.out.println("How many odd and even numbers do you want to print?");
        Scanner sc = new Scanner(System.in);
        limit = sc.nextInt();
        System.out.println("First " + limit + " Odd numbers are: ");
        for (int counter = 0; counter < limit; counter++) {
            System.out.println(2 * odd + 1);
            odd++;
        }
        System.out.println("\n**************************************************\n");
        System.out.println("First " + limit + " Even numbers are: ");
        for (int counter = 0; counter < limit; counter++) {
            System.out.println(2 * even);
            even++;
        }
    }
}
