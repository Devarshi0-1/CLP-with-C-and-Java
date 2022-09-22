package com.company;
import  java.util.Scanner;
public class sum_of_array {
    public static void main(String[] args) {
        float [] numbers;
        float result = 0;
        int size;
        System.out.println("Enter the length of the array: ");
        Scanner sc = new Scanner(System.in);
        size = sc.nextInt();
        numbers = new float[size];
        System.out.println("Enter the elements of the array: ");
        for (int counter = 0; counter < size;counter++)
        {
            numbers[counter]= sc.nextFloat();
        }
        for(float element:numbers)
        {
            result = result + element;
        }
        System.out.println("The sum of each element of the array is: " + result);
    }
}
