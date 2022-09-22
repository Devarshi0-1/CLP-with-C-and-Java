package com.company;
import java.util.Scanner;
class Student{
    String name;
    int rollNo;
    static int count = 0;
    Scanner sc = new Scanner(System.in);
    Scanner sc1 = new Scanner(System.in);
    Student(){
        count++;
    }

    void acceptDetails(){
        System.out.println("Enter the Name of the student");
        name = sc.nextLine();
        System.out.println("Enter the Roll Number of the student");
        rollNo = sc1.nextInt();
    }
}

public class StudentQuestion {
    public static void main(String[] args) {
        Student s1 = new Student();
        s1.acceptDetails();
        System.out.println("Number of Objects created = " + Student.count);
    }
}
