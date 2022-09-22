package com.company;

import java.util.Scanner;

public class physics_marks_avg {
    public static void main(String[] args) {
        int size, total = 0;
        int[] marks;
        float avg;
        System.out.println("Enter the number of students in the class");
        Scanner sc = new Scanner(System.in);
        size = sc.nextInt();
        marks = new int[size];
        System.out.println("Enter marks of each student in Physics: ");
        for (int counter = 0; counter < size; counter++) {
            marks[counter] = sc.nextInt();
        }
        for (int element : marks) {
            total = total + element;
        }
        avg = (total/(float)(size));
        System.out.println("Total marks of all the students in Physics = " + total);
        System.out.println("Average marks of students in Physics = " + avg);
    }
}
