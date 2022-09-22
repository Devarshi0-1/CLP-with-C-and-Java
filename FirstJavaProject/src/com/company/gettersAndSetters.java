package com.company;

import java.util.Scanner;

class MyRectangle{
    private float width;
    private float height;
    private float area;

    public static void print(){
        System.out.println("Mai ek static method hu");
    }

    public void setWidth(float w){
        this.width = w;
    }

    public void setHeight(float h){
        this.height = h;
    }

    public float getWidth(){
        return width;
    }

    public float getHeight(){
        return height;
    }

    public float calculateArea(){
        area = width * height;
        return area;
    }

}

public class gettersAndSetters {
    public static void main(String[] args) {

        MyRectangle r1 = new MyRectangle();

//        r1.height = 10;  --> Will not work due to private access of height variable

        System.out.println("Enter the Height of the rectangle: ");
        r1.setHeight(10f);

        System.out.println("Enter the Width of the rectangle: ");
        r1.setWidth(20f);

        System.out.println("The height of the rectangle = " + r1.getHeight() + "\nWidth = " + r1.getWidth() + "\nArea = " + r1.calculateArea() + " units");
    }
}
