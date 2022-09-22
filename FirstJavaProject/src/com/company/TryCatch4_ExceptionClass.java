package com.company;

import java.util.Scanner;

class MyException extends Exception {
    @Override
    public String toString() {
        return "This is toString method";
    }

    @Override
    public String getMessage() {
        return "This is getMessage method";
    }
}

public class TryCatch4_ExceptionClass {
    public static void main(String[] args) {
        int num;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number");
        num = sc.nextInt();

        if (num > 10) {
            try {
                throw new MyException();
            } catch (Exception e) {
                System.out.println(e.getMessage());
                System.out.println(e.toString());
                e.printStackTrace();
            }
        }
    }
}
