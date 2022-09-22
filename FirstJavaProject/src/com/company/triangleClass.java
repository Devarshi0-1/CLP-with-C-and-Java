package com.company;

import java.util.Scanner;
import java.lang.Math;
class Point{
    private float x;
    private float y;

    public float getX() {
        return x;
    }

    public void setX(float x) {
        this.x = x;
    }

    public float getY() {
        return y;
    }

    public void setY(float y) {
        this.y = y;
    }
}

class Triangle extends Point{
    private float base;
    private float perpendicular;
    private float hypo;
    private float area;

    public float getArea() {
        return area;
    }

    public void setArea(float area) {
        this.area = area;
    }

    public float getBase() {
        return base;
    }

    public void setBase(float base) {
        this.base = base;
    }

    public float getHypo() {
        return hypo;
    }

    public void setHypo(float hypo) {
        this.hypo = hypo;
    }

    public float getPerpendicular() {
        return perpendicular;
    }

    public void setPerpendicular(float perpendicular) {
        this.perpendicular = perpendicular;
    }

}
public class triangleClass {
    public static void main(String[] args) {
        float sumOfSquaredSides;
        float hypo;
        float area;
        Scanner sc = new Scanner(System.in);
        Point p = new Point();
        Triangle t = new Triangle();
        System.out.println("Enter the Origin of the Triangle");
        t.setX(sc.nextFloat());
        t.setY(sc.nextFloat());
        System.out.println("Enter the size of Base: ");
        t.setBase(sc.nextFloat());
        System.out.println("Enter the size of Perpendicular: ");
        t.setPerpendicular(sc.nextFloat());
        sumOfSquaredSides = (t.getBase() * t.getBase()) + (t.getPerpendicular() * t.getPerpendicular());
        hypo = (float)(Math.sqrt(sumOfSquaredSides));
        t.setHypo(hypo);
        area = (float)(0.5*t.getBase()*t.getPerpendicular());
        t.setArea(area);
        System.out.println("Area of the Triangle = " + t.getArea());
        System.out.println("Location of Triangle = " + t.getX() + "," + t.getY());
    }
}