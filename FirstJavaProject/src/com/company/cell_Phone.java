package com.company;

class cellPhone{

    public void ring(){
        System.out.println("Ringing...");
    }

    public void vibrate(){
        System.out.println("Vibrating...");
    }

    public void call(){
        System.out.println("Calling Shubham...");
    }
}
public class cell_Phone {
    public static void main(String[] args) {
        cellPhone Realme = new cellPhone();
        Realme.call();
        Realme.vibrate();
        Realme.ring();
    }
}
