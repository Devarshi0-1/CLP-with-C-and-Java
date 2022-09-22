package com.company;
import java.util.Scanner;

abstract class Bank{
    abstract float getRateOfInterest();
}

class PNB extends Bank{
    private float RateOfInterest = 4f;
    @Override
    float getRateOfInterest(){
        return RateOfInterest;
    }
}

class SBI extends Bank{
    private float RateOfInterest = 5f;
    @Override
    float getRateOfInterest(){
        return RateOfInterest;
    }

}

public class BankQuestion {
    public static void main(String[] args) {
        PNB b1 = new PNB();
        SBI b2 = new SBI();

        System.out.println("Rate of Interest of PNB = " + b1.getRateOfInterest() + " %");
        System.out.println("Rate of Interest of SBI = " + b2.getRateOfInterest() + " %");
    }
}
