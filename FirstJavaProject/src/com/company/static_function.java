package com.company;

import java.util.Scanner;

public class static_function {
    static int add(int a, int b) {
        return a + b;
    }

    public static void main(String[] args) {
        int num1, num2, answer;
        System.out.println("Enter the numbers you want to add: ");
        Scanner sc = new Scanner(System.in);
        num1 = sc.nextInt();
        num2 = sc.nextInt();
        answer = add(num1,num2);
        System.out.println(num1 + "+" + num2 + "=" + answer);
    }
}
