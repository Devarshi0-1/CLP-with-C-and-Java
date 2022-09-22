package com.company;

import java.util.Scanner;

public class factorial_loop {
    public static void main(String[] args) {
        int num, fact = 1;
        System.out.println("Enter a number you want to calculate the factorial of: ");
        Scanner sc = new Scanner(System.in);
        num = sc.nextInt();
        for (int counter = num; counter > 0; counter--) {
            fact = fact * counter;
        }
        System.out.println(num + "!" + "=" + fact);
    }
}
