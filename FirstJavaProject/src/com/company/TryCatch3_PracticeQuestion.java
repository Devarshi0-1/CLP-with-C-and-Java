package com.company;

import java.util.Scanner;

public class TryCatch3_PracticeQuestion {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        float[] array = new float[5];
        float deno;
        int index;
        boolean flag = true;

        System.out.println("Enter the elements of the array");
        for (int counter = 0; counter < array.length; counter++) {
            array[counter] = sc.nextFloat();
        }

        while (flag) {
            try {
                System.out.println("Enter the index of the element you want to be divided");
                index = sc.nextInt();

                System.out.println("Enter the denominator");
                deno = sc.nextFloat();
                System.out.println("Starting the Division...");

                try {
                    float result = array[index] / deno;
                    flag = false;
                    System.out.println("Result: " + result);
                } catch (ArrayIndexOutOfBoundsException e) {
                    System.out.println(e);
                }
            } catch (Exception e) {
                System.out.println(e);
            }
        }
    }
}
