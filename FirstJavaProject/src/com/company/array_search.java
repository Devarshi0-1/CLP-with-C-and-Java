package com.company;

import java.util.Scanner;

public class array_search {
    public static void main(String[] args) {
        int[] numbers;
        int size, search, found = 0, index = 0;
        System.out.println("Enter the size of the array: ");
        Scanner sc = new Scanner(System.in);
        size = sc.nextInt();
        numbers = new int[size];
        System.out.println("Enter the elements of the array: ");
        for (int counter = 0; counter < size; counter++) {
            numbers[counter] = sc.nextInt();
        }
        System.out.println("Enter the element you want to search: ");
        search = sc.nextInt();
        for (int counter = 0; counter < size; counter++) {
            if (numbers[counter] == search) {
                found = 1;
                index = counter;
            }
        }
        if (found == 1) {
            System.out.println("The element " + search + " was found in the array at index = " + index);
        }
        else {
            System.out.println("Search element was not found in the array");
        }
    }
}
