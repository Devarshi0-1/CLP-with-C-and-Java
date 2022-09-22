package com.company;

import java.util.Scanner;

class NegativeDimensionException extends Exception {
    @Override
    public String toString() {
        return "Negative Dimension Entered!";
    }

    @Override
    public String getMessage() {
        return "Negative Dimension Entered!";
    }
}

class rectangleArithmatic {
    public float rectangleArea(float length, float width) throws NegativeDimensionException {
        if (length < 0 || width < 0) {
            throw new NegativeDimensionException();
        }
        return length * width;
    }
}

public class TryCatch5_CustomException {
    public static void main(String[] args) {
        float length, width, result;
        rectangleArithmatic r1 = new rectangleArithmatic();
        System.out.println("Enter the Length and Width of the Rectangle respectively");
        Scanner sc = new Scanner(System.in);
        length = sc.nextFloat();
        width = sc.nextFloat();

        try {
            result = r1.rectangleArea(length, width);
            System.out.println("Area of Rectangle: " + result);
        } catch (Exception e) {
            System.out.println("Exception");
        }
    }
}
