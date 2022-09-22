package com.company;

class Parent2{
    public void run(){
        System.out.println("Running Parent...");
    }
}

class child2 extends Parent2{
    @Override
    public void run(){
        System.out.println("Running Child....");
    }
}

public class overwriting {
    public static void main(String[] args) {
        Parent2 p1 = new Parent2();
        child2 c1 = new child2();

        p1.run();
        c1.run();
    }
}
