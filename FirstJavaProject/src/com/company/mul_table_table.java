package com.company;

import java.util.Scanner;

public class mul_table_table {
    void mul_table(int number, int iteration) {
        System.out.printf("%d X %d = %d\n", number, iteration, number * iteration);
    }

    public static void main(String[] args) {
        int num, length;
        System.out.println("Enter the number you want the Multiplication table of: ");
        Scanner sc = new Scanner(System.in);
        num = sc.nextInt();
        System.out.println("Enter the length of the table: ");
        length = sc.nextInt();
        mul_table_table obj = new mul_table_table();
        for (int counter = 1; counter <= length; counter++) {
            obj.mul_table(num, counter);
        }
        System.out.println("*****************************************");
    }
}
