package com.company;

import java.util.Scanner;
import java.util.Random;

class game {
    private final int computerNumber;
    private int guessedNumber;
    private int noOfGuesses;


    game(){
        Random rand = new Random();
        this.computerNumber = rand.nextInt(100);
    }

    public void takeUserInput(){
        System.out.println("Guess a number from 1-100");
        Scanner sc = new Scanner(System.in);
        this.guessedNumber = sc.nextInt();
    }

    public boolean isCorrect(){
        noOfGuesses++;
        if(computerNumber == guessedNumber){
            return true;
        }
        else if(computerNumber > guessedNumber){
            System.out.println("Go Higher...");
            return false;
        }
        else{
            System.out.println("Too high...");
            return false;
        }
    }

    public int getNoOfGuesses(){
        return noOfGuesses;
    }
}

public class guessTheNumberOOPSedition {
    public static void main(String[] args) {
        game guessNumberGame = new game();
        do {
            guessNumberGame.takeUserInput();
        }while (!guessNumberGame.isCorrect());
        System.out.printf("You took %d Guesses", guessNumberGame.getNoOfGuesses());
    }
}
