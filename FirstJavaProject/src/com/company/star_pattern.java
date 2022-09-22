package com.company;

import java.util.Scanner;

public class star_pattern {
    public static void main(String[] args) {
        int counter, counter2, n;
        System.out.println("How long do you want your pattern to be?");
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        for (counter = n; counter > 0; counter--) {
            for (counter2 = 0; counter2 < counter; counter2++) {
                System.out.print(" *");
            }
            System.out.print("\n");
        }
    }
}
