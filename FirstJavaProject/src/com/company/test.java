package com.company;

import java.util.Scanner;

class exampleClass{

//    exampleClass(){
//        System.out.println("This is a constructor");
//    }

    private int data;
    public int num;

    public void setData(int value){
        data = value;
    }

    public int getData(){
        return data;
    }
}

public class test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        exampleClass c1 = new exampleClass();
        c1.num = 20;

//        c1.data = 30;
        c1.setData(sc.nextInt());
        System.out.println(c1.getData());
        System.out.println(c1.num);

    }
}
