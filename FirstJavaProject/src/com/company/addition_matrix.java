package com.company;

import java.util.Scanner;

public class addition_matrix {
    public static void main(String[] args) {
        int row, col;
        int[][] m1;
        int[][] m2;
        int[][] resultant;
        System.out.println("Enter the number of Rows in the matrix: ");
        Scanner sc = new Scanner(System.in);
        row = sc.nextInt();
        System.out.println("Enter the number of Columns in the matrix: ");
        col = sc.nextInt();
        m1 = new int[row][col];
        m2 = new int[row][col];
        resultant = new int[row][col];
        System.out.println("Enter the First Matrix: ");
        for (int counter = 0; counter < row; counter++) {
            for (int counter2 = 0; counter2 < col; counter2++) {
                System.out.printf("[%d] [%d] = ", counter, counter2);
                m1[counter][counter2] = sc.nextInt();
            }
        }
        System.out.println("Enter the Second Matrix: ");
        for (int counter = 0; counter < row; counter++) {
            for (int counter2 = 0; counter2 < col; counter2++) {
                System.out.printf("[%d] [%d] = ", counter, counter2);
                m2[counter][counter2] = sc.nextInt();
            }
        }
        System.out.println("The resultant matrices: ");
        for(int counter =0 ; counter < row ; counter++)
        {
            for(int counter2 =0 ; counter2 < col;counter2++)
            {
                resultant[counter][counter2] = m1[counter][counter2] + m2[counter][counter2];
            }
        }
        for (int counter = 0; counter < row; counter++) {
            for (int counter2 = 0; counter2 < col; counter2++) {
                System.out.printf("[%d]\t", resultant[counter][counter2]);
            }
            System.out.print("\n");
        }

    }
}
