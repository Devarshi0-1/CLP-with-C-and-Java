package com.company;

import java.util.Scanner;

class animall {
    String Name;

    public void setName(String Name) {
        this.Name = Name;
        System.out.println("eating...");
    }
}

class dogg extends animall {
    public void printBark() {
        System.out.println("barking...");
    }
}

public class problem4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        animall a = new animall();
        System.out.println("Enter Animal Name");
        a.setName(sc.nextLine());
        System.out.println("Animal name is: " + a.Name);
    }
}
