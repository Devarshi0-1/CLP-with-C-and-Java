package com.company;

import java.util.Scanner;

class circle {
    private float rad;
    private float peri;
    private float area;

    public void setRad(float r) {
        this.rad = r;
    }

    public float getRad() {
        return rad;
    }

    public void setPeri(float p) {
        this.peri = p;
    }

    public float getPeri() {
        return peri;
    }

    public void setArea(float a) {
        this.area = a;
    }

    public float getArea() {
        return area;
    }
}

public class private_circle {
    public static void main(String[] args) {
        float radius, perimeter, area;
        double realPerimeter, realArea;
        circle c1 = new circle();

        //Asking and setting the value of radius of Circle
        System.out.println("Set the Radius of the circle: ");
        Scanner sc = new Scanner(System.in);
        radius = sc.nextFloat();
        c1.setRad(radius);

        //Asking the value of perimeter of Circle
        System.out.println("Set the Perimeter of the circle: ");
        perimeter = sc.nextFloat();

        //Asking the value of Area of Circle
        System.out.println("Set the Area of the circle: ");
        area = sc.nextFloat();

        //Calculating the real value of Perimeter and Area in accordance to the Radius provided
        realPerimeter = (2 * 3.14) * radius;
        realArea = 3.14 * radius * radius;

        // Checking if the value of Perimeter and Area provided by the user are in the acceptable range of the Real Area and Real Perimeter in accordance to the Radius provided
        if ((area > (realArea - 1) && (area < (realArea + 1))) && (perimeter > (realPerimeter - 1) && perimeter < (realPerimeter + 1))) {

            //Setting the value of Perimeter and Area provided by the user to the class as these values are in the acceptable range of Real Area and Real Perimeter
            c1.setPeri(perimeter);
            c1.setArea(area);
            System.out.println("No problems were found with the entered value");
            System.out.println("The values you have provided has been set");
        }

        else {
            System.out.println("The values were not set");
            System.out.println("Real value of Perimeter = " + realPerimeter);
            System.out.println("Real value of Area = " + realArea);
        }
    }
}
