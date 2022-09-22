package com.company;

import java.util.Scanner;

class InsufficientBalance extends Exception{
    @Override
    public String toString() {
        return "Insufficient Balance!";
    }

    @Override
    public String getMessage() {
        return "Insufficient Balance!";
    }
}

class accounting{
    float afterBalance;
    public void account(float accountBalance, float withdrawAmount) throws  InsufficientBalance{
        afterBalance = accountBalance - withdrawAmount;
        if (afterBalance < 2000) {
            throw new InsufficientBalance();
        }
    }
}

public class TryCatch6_Practice {
    public static void main(String args[]) {
        float withdraw, accountBalance;

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Account Balance");
        accountBalance = sc.nextFloat();
        System.out.println("Enter the amount to be withdrawn");
        withdraw = sc.nextFloat();
        accounting a1 = new accounting();

        try{
            a1.account(accountBalance, withdraw);
        }
        catch (InsufficientBalance e){
            System.out.println(e);
        }
        finally {
            System.out.println("Thanks For Choosing Us!");
        }
    }
}