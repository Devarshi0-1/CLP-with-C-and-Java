package com.company;
import  java.util.Scanner;
public class which_day {
    public static void main(String[] args) {
        byte day;
        System.out.println("Enter today's day in number");
        Scanner sc = new Scanner(System.in);
        day = sc.nextByte();
        switch (day)
        {
            case 1 -> System.out.println("Today is Monday");
            case 2 -> System.out.println("Today is Tuesday");
            case 3 -> System.out.println("Today is Wednesday");
            case 4 -> System.out.println("Today is Thursday");
            case 5 -> System.out.println("Today is Friday");
            case 6 -> System.out.println("Today is Saturday");
            case 7 -> System.out.println("Today is Sunday");
            default -> System.out.println("Invalid input days cannot be more than 7 and less than 1");
        }
    }
}
