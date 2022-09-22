package com.company;

import java.util.Scanner;

public class sum_natural_recursion {
    int sum_recurs(int n) {
        if ((n == 0) || (n == 1)) {
            return n;
        }
        return n + sum_recurs(n - 1);
    }

    public static void main(String[] args) {
        int number, result = 0;
        System.out.println("How many first natural numbers do you want to sum: ");
        Scanner sc = new Scanner(System.in);
        number = sc.nextInt();
        sum_natural_recursion obj = new sum_natural_recursion();
        if (number >= 0) {
            result = obj.sum_recurs(number);
            System.out.println("Sum of " + number + " natural numbers = " + result);
        } else {
            System.out.println("Invalid Input");
        }
    }
}
