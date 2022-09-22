package com.company;
import java.util.Scanner;
public class marksPercentage {
    public static void main(String[] args) {
        float physics, chemistry, maths, biology, english, result;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the marks of Student in Physics");
        physics = sc.nextFloat();
        System.out.println("Enter the marks of Student in Chemistry");
        chemistry = sc.nextFloat();
        System.out.println("Enter the marks of Student in Biology");
        biology = sc.nextFloat();
        System.out.println("Enter the marks of Student in Maths");
        maths = sc.nextFloat();
        System.out.println("Enter the marks of Student in English");
        english = sc.nextFloat();
        result = physics + chemistry + biology + maths + english;
        System.out.println("The total marks of the Student is: "+ result);
        System.out.println("The percentage of the Student is: " + (result/500)*100 + "%");
    }
}
