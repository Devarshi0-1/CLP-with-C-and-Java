package com.company;

import java.util.Scanner;

public class least_array {
    public static void main(String[] args) {
        int[] arr;
        int size, smallest;
        System.out.println("Enter the size of the array: ");
        Scanner sc = new Scanner(System.in);
        size = sc.nextInt();
        arr = new int[size];
        System.out.println("Enter the elements of the array: ");
        for (int counter = 0; counter < size; counter++) {
            arr[counter] = sc.nextInt();
        }
        smallest = arr[0];
        for (int counter = 0; counter < size; counter++) {
            if (smallest > arr[counter]) {
                smallest = arr[counter];
            }
        }
        System.out.println("The smallest element in the array is: " + smallest);
    }
}
