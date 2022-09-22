package com.company;

import java.util.Scanner;

public class non_static_obj_function {
    int add(int a, int b){
        return a+b;
    }
    public static void main(String[] args) {
        int num1, num2, result;
        System.out.println("Enter the 2 numbers you want to add: ");
        Scanner sc = new Scanner(System.in);
        num1 = sc.nextInt();
        num2 = sc.nextInt();
        non_static_obj_function obj = new non_static_obj_function();
        result = obj.add(num1,num2);
        System.out.printf("%d + %d = %d", num1,num2,result);
    }
}
