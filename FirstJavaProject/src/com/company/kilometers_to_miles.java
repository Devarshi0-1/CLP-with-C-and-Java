package com.company;
import java.util.Scanner;
public class kilometers_to_miles {
    public static void main(String[] args) {
        float kilometer;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the distance in KM");
        kilometer = sc.nextFloat();
        System.out.println(kilometer + "kms = " + kilometer*0.621371 + "miles");
    }
}
