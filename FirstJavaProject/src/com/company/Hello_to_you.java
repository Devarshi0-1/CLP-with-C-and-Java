package com.company;
import java.util.Scanner;
public class Hello_to_you {
    public static void main(String[] args) {
        String name;
        System.out.println("What is your name");
        Scanner sc = new Scanner(System.in);
        name = sc.nextLine();
        System.out.println("Hello " + name + " hope you're having a good day.");
    }
}
