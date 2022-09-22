package com.company;
import java.util.Scanner;
public class ideone {
    public static int sum(int a, int b){
        int sum = a+b;
        return sum;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int c = s.nextInt();
        int d = s.nextInt();

        int sum = sum(c,d);
        System.out.println(sum);
    }
}
