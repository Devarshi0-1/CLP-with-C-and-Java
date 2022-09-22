package com.company;

class overload {

    overload() {
        System.out.println("This is a constructor");
    }

    overload(int a) {
        System.out.println("This is a overloaded cons. with a = " + a);
    }

    overload(int a, int b) {
        System.out.println("This is a overloaded cons. with a = " + a + "and b = " + b);
    }

    public void Sum(int a, int b) {
        System.out.println("Sum = " + a + b);
    }

    public void Sum(int a, int b, int c) {
        System.out.println("Sum = " + a + b + c);
    }
}

public class overloadingmethod {
    public static void main(String[] args) {
        overload l1 = new overload();
        overload l2 = new overload(2);
        overload l3 = new overload(2,3);
//        l1.Sum(2, 3);
//        l1.Sum(2, 3, 4);
    }
}
