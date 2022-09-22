package com.company;

import java.util.Random;
import java.util.Scanner;

public class guessTheNumber {
    public static void main(String[] args) {
        int bound, userInput, computer_number, chances = 0;
        System.out.println("Enter the random number bound");
        Scanner sc = new Scanner(System.in);
        bound = sc.nextInt();
        Random random = new Random();
        computer_number = random.nextInt(bound);
        for (int counter = 0; counter < 10; counter++) {
            System.out.println("Gues a number between 0 - " + bound);
            userInput = sc.nextInt();
            chances++;
            if (userInput == computer_number) {
                System.out.println("Your guess was right");
                break;
            }
            else {
                System.out.println("Your guess was wrong");
            }
            System.out.println("***************************************");
            System.out.println("Computer guess was: " + computer_number);
            System.out.println("Chances taken: " + chances);
            System.out.println("***************************************");
        }
    }
}
