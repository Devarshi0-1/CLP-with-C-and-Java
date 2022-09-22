package com.company;

import java.util.Scanner;

public class twoD_array {
    public static void main(String[] args) {
        int[][] numbers;
        int rows, columns;
        System.out.println("Enter the number of rows in your matrix: ");
        Scanner sc = new Scanner(System.in);
        rows = sc.nextInt();
        System.out.println("Enter the number of columns in your matrix: ");
        columns = sc.nextInt();
        numbers = new int[rows][columns];
        for(int counter =0 ; counter < rows; counter++)
        {
            for(int counter2 =0; counter2 < columns; counter2++)
            {
                System.out.printf("[%d] [%d] = ", counter,counter2);
                numbers[counter][counter2] = sc.nextInt();
            }
        }
        System.out.println("*******************************************");
        System.out.println("Contents of the array are: ");
        System.out.println("*******************************************");
        for(int counter =0 ; counter < rows; counter++)
        {
            for(int counter2 =0; counter2 < columns; counter2++)
            {
                System.out.printf("[%d] [%d] = %d\n", counter,counter2,numbers[counter][counter2]);
            }
        }

    }
}
