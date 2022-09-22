package com.company;

abstract class telephone{
    abstract void ring();
    abstract void respond();
    abstract void disconnect();
}

class SmartTelephone extends telephone{
    public void ring(){
        System.out.println("Ringing...");
    }

    public void respond(){
        System.out.println("Responding...");
    }

    public void disconnect(){
        System.out.println("Disconnecting...");
    }
}

public class telephoneClass {
    public static void main(String[] args) {
        telephone t = new SmartTelephone();
        t.ring();
        t.respond();
        t.disconnect();
    }
}
