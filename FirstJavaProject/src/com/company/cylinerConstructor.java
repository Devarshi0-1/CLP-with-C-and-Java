package com.company;

import java.util.Scanner;

class cyl{
    private float radius;
    private float height;

    public cyl(float r, float h){
        this.radius = r;
        this.height = h;
    }

    public float volume(){
        return (float) (Math.PI * radius * radius * height);
    }

    public float surfaceArea(){
        return (float) (2 * Math.PI * radius * (radius + height));
    }
}
public class cylinerConstructor {
    public static void main(String[] args) {
        System.out.println("Enter the Radius and Height of the Cylinder");
        Scanner sc = new Scanner(System.in);
        cyl c1 = new cyl(sc.nextFloat(), sc.nextFloat());
        System.out.println("Volume = " + c1.volume());
        System.out.println("Surface Area = " + c1.surfaceArea());
    }
}
