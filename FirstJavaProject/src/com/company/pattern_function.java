package com.company;
import java.util.Scanner;
public class pattern_function {
    void star_pattern(int row1){
        for (int counter = 1; counter <= row1; counter++)
        {
            for (int counter2 = 1; counter2 <= counter; counter2++)
            {
                System.out.print("* ");
            }
            System.out.print("\n");
        }
    }
    public static void main(String[] args) {
        int row;
        System.out.println("Enter the number of rows you want: ");
        Scanner sc = new Scanner(System.in);
        row = sc.nextInt();
        pattern_function obj = new pattern_function();
        obj.star_pattern(row);
    }
}
