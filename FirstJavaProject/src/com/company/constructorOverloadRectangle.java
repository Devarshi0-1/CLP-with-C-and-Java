package com.company;

import java.util.Scanner;

class rectangle {
    private float length;
    private float width;

    public rectangle() {
        this.length = 10;
        this.width = 4;
    }

    public rectangle(float l, float w) {
        this.length = l;
        this.width = w;
    }

    public float area() {
        return length * width;
    }
}

public class constructorOverloadRectangle {
    public static void main(String[] args) {
        //Without any Arguments passed
        //rectangle r1 = new rectangle();

        //With Arguments passed
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Length and Width of the Rectangle: ");
        rectangle r1 = new rectangle(sc.nextFloat(), sc.nextFloat());


        System.out.println("Area = " + r1.area());
    }
}
