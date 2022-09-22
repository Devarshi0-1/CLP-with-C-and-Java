package com.company;

import java.util.Scanner;

public class TryCatch1 {
    public static void main(String[] args) {
        float num1,num2, result;
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter Number 1");
        num1 = sc.nextFloat();

        System.out.println("Enter Number 2");
        num2 = sc.nextFloat();

        try{
            result = num1/num2;
            System.out.println("On Dividing Num1 with Num2 we get: " + num1/num2);
        }
        catch (Exception e){
            System.out.println("Division Failed!");
            System.out.println("The error was: " + e);
        }

    }
}
