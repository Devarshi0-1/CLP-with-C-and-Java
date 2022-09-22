package com.company;


class player1 {
    public void hit() {
        System.out.println("Hitting...");
    }

    public void run() {
        System.out.println("Running...");
    }

    public void fire() {
        System.out.println("Firing...");
    }
}

public class michel_gta {
    public static void main(String[] args) {
        player1 MichaelDeSanta = new player1();
        MichaelDeSanta.hit();
        MichaelDeSanta.run();
        MichaelDeSanta.fire();
    }
}
