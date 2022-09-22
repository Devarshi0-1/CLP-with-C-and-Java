package com.company;

import java.util.Scanner;

public class accepting_printing_arrays {
    public static void main(String[] args) {
        int[] numbers;
        int size;
        System.out.println("How many numbers do you want to enter in the array?");
        Scanner sc = new Scanner(System.in);
        size = sc.nextInt();
        numbers = new int[size];
        System.out.println("Enter the numbers");
        for (int counter = 0; counter < size; counter++) {
            numbers[counter] = sc.nextInt();
        }
        System.out.println("Elements of the array are: ");
        for (int counter = 0; counter < size; counter++) {
            System.out.println(numbers[counter]);
        }
    }
}
