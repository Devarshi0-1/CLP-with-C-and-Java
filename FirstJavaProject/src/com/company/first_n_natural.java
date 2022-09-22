package com.company;

import java.util.Scanner;

public class first_n_natural {
    public static void main(String[] args) {
        int how_many;
        System.out.println("How many numbers do you want to print in reverse?");
        Scanner sc = new Scanner(System.in);
        how_many = sc.nextInt();
        for(int counter = how_many; counter != 0 ; counter--)
        {
            System.out.println(counter);
        }
    }
}
