package com.company;

import java.util.Scanner;

public class array_sorted_or_not {
    public static void main(String[] args) {
        int[] arr;
        int size;
        boolean isSorted = true;
        System.out.println("Enter the size of the array: ");
        Scanner sc = new Scanner(System.in);
        size = sc.nextInt();
        arr = new int[size];
        System.out.println("Enter the elements of the array: ");
        for (int counter = 0; counter < size; counter++) {
            arr[counter] = sc.nextInt();
        }
        for (int counter = 0; counter < size-1; counter++) {
            if(arr[counter] > arr[counter+1])
            {
                isSorted = false;
                break;
            }
        }
        if(isSorted) {
            System.out.println("The array is sorted");
        }
        else  {
            System.out.println("Array is not sorted");
        }
    }
}
