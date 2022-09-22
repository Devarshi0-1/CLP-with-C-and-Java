package com.company;

import java.util.Scanner;

class Rectangle{
    double length;
    double breadth;

    Rectangle(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }
}

class RectangleArea extends Rectangle {
    RectangleArea(double length, double breadth) {
        super(length, breadth);
    }

    double getArea() {
        return length * breadth;
    }
}

class QuestionRectangle{
    public static void main(String [] args)
    {
        float length, breadth;
        Scanner sc = new Scanner(System.in);
        length = sc.nextFloat();
        breadth = sc.nextFloat();

        RectangleArea r1 = new RectangleArea(length, breadth);

        System.out.println("Length = " + r1.length);
        System.out.println("Breadth = " + r1.breadth);
        System.out.println("Area = " + r1.getArea());
    }
}

