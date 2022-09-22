package com.company;

class Parent{
    int a;
    int b;
}

class child extends Parent{  //extends keyword is used to interit classes
    int c;
}

class childOfchild extends child{
    int d;
}


public class interetance {
    public static void main(String[] args) {
        Parent p1 = new Parent();
        child c1 = new child();
        childOfchild cc1 = new childOfchild();

        p1.a = 10;
        p1.b = 20;

//        p1.c = 30;
        c1.a = 30;
        c1.b = 40;
        c1.c = 50;

        cc1.a = 10;
        cc1.b = 20;
        cc1.c = 30;
        cc1.d = 40;

        System.out.println("CC1.a = " + cc1.a);
        System.out.println("CC1.b = " + cc1.b);
        System.out.println("CC1.c = " + cc1.c);
        System.out.println("CC1.d = " + cc1.d);
    }
}
