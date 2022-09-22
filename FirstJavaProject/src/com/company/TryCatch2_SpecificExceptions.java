package com.company;

import java.util.Scanner;

public class TryCatch2_SpecificExceptions {
    public static void main(String[] args) {
        int [] arr = new int[3];
        arr[0] = 11;
        arr[1] = 23;
        arr[2] = 34;

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the index of the element you want to divide");
        int ind = sc.nextInt();

        System.out.println("Enter the number you want to divide it with");
        int num = sc.nextInt();

        try{
            System.out.println("The result = " + arr[ind]/num);
        }
        catch (ArithmeticException e){
            System.out.println(e);
        }
        catch (ArrayIndexOutOfBoundsException e){
            System.out.println(e);
        }
        catch (Exception e){
            System.out.println("Some exception occured");
            System.out.println(e);
        }
    }
}
