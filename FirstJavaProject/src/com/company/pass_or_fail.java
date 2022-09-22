package com.company;

import java.util.Scanner;

public class pass_or_fail {
    public static void main(String[] args) {
        byte physics, chemistry, maths;
        short result;
        float percentage;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the marks of students in Physics, Chemistry and Maths respectively");
        System.out.println("Only Enter the marks out of 100 in each subject");
        physics = sc.nextByte();
        chemistry = sc.nextByte();
        maths = sc.nextByte();
        result = (short) (physics + chemistry + maths);
        percentage = (result / 300f) * 100;
        System.out.println("Your percentage is: " + percentage);
        if (physics >= 33 && chemistry >= 33 && maths >= 33 && percentage >= 40) {
            System.out.println("You have successfully cleared the exams, Congrats");
        } else {
            System.out.println("You didn't make it this year, Sorry! Work harder next time");
        }
    }
}
