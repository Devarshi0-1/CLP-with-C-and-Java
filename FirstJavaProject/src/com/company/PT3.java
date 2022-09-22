package com.company;

import java.util.Scanner;

class InvalidAmountException extends Exception{
    @Override
    public String toString() {
        return "Invalid Amount Exception!";
    }

    @Override
    public String getMessage() {
        return "Invalid Amount Exception!";
    }
}

class InsufficientFundException extends Exception{
    @Override
    public String toString() {
        return "Insufficient Fund Exception!";
    }

    @Override
    public String getMessage() {
        return "Insufficient Fund Exception!";
    }
}

class Bankk{
    float Balance, WithdrawAmount, Deposit;

    void setBalance(){
        System.out.println("Enter the Balance in your Account");
        Scanner sc = new Scanner(System.in);
        Balance = sc.nextFloat();
    }

    void Deposit(){
        System.out.println("Enter the Amount you want to Deposit");
        Scanner sc = new Scanner(System.in);
        Deposit = sc.nextFloat();
        Balance = Balance + Deposit;
    }

    void checkBalance() throws InsufficientFundException, InvalidAmountException {
        System.out.println("Enter the WithDrawl Amount");
        Scanner sc = new Scanner(System.in);
        WithdrawAmount = sc.nextFloat();
        if(WithdrawAmount > Balance){
            throw new InsufficientFundException();
        }

        if(WithdrawAmount <= 0){
            throw new InvalidAmountException();
        }
        else{
            System.out.println("Your Remaining Balance = " + (Balance - WithdrawAmount));
        }
    }
}

public class PT3 {
    public static void main(String[] args) {
        Bankk b1 = new Bankk();
        try{
            b1.setBalance();
            b1.Deposit();
            b1.checkBalance();
        }
        catch (Exception e){
            System.out.println(e);
        }
    }
}
