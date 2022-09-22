package com.company;
import  java.util.Scanner;
public class maximum_of_array {
    public static void main(String[] args) {
        int [] arr;
        int size,largest;
        System.out.println("Enter the size of the array: ");
        Scanner sc = new Scanner(System.in);
        size = sc.nextInt();
        arr = new int[size];
        System.out.println("Enter the elements of the array: ");
        for (int counter = 0; counter < size; counter++)
        {
            arr[counter] = sc.nextInt();
        }
        largest = arr[0];
        for (int counter = 0; counter < size; counter++)
        {
            if(largest < arr[counter])
            {
                largest = arr[counter];
            }
        }
        System.out.println("The largest element in the array is: "+ largest);
    }
}
