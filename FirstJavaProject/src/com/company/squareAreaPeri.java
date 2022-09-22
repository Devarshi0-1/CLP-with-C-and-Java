package com.company;

import java.util.Scanner;

class square {

    public int area(int side) {
        return side * side;
    }

    public int perimeter(int side) {
        return 4 * side;
    }
}

public class squareAreaPeri {
    public static void main(String[] args) {
        square s1 = new square();
        int side;
        System.out.println("Enter the side of the Square: ");
        Scanner sc = new Scanner(System.in);
        side = sc.nextInt();
        System.out.println("Area of the Square is: "+ s1.area(side) + " units");
        System.out.println("Perimeter of the Square is: "+ s1.perimeter(side) + " units");
    }
}
