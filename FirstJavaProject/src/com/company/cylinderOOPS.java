package com.company;

import java.util.Scanner;

class cyliner{
    private float radius;
    private float height;

    public void setRadius(float r) {
        this.radius = r;
    }

    public float getRadius() {
        return radius;
    }

    public void setHeight(float h) {
        this.height = h;
    }

    public float getHeight() {
        return height;
    }

    public float volume() {
        return (float) (Math.PI * radius * radius * height);
    }

    public float surfaceArea() {
        return (float) (2 * Math.PI * radius * (radius + height));
    }
}



public class cylinderOOPS {
    public static void main(String[] args) {
        cyliner c1 = new cyliner();
        System.out.println("Enter the Radius of the Cylinder ");
        Scanner sc = new Scanner(System.in);
        c1.setRadius(sc.nextFloat());
        System.out.println("Enter the Height of the Cylinder" );
        c1.setHeight(sc.nextFloat());
        System.out.println("Surface Area = " + c1.surfaceArea());
        System.out.println("Volume = " + c1.volume());
    }
}
