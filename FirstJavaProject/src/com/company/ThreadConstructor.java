package com.company;

class MyThread extends Thread {

    MyThread(String name) {
        super(name);
    }

    @Override
    public void run() {
        for (int counter = 0; counter < 40000; counter++) {
            System.out.println("Thread 1 is running");
        }
    }
}

class MyThread11 extends Thread {

    MyThread11(String name) {
        super(name);
    }

    @Override
    public void run() {
        for (int counter = 0; counter < 40000; counter++) {
            System.out.println("Thread 1 is running");
        }
    }
}

public class ThreadConstructor {
    public static void main(String[] args) {
        MyThread t1 = new MyThread("Thread1");
        MyThread11 t2 = new MyThread11("Thread2");
        System.out.println("Name of the Thread: " + t1.getName());
        System.out.println("ID of the Thread: " + t1.getId());

        System.out.println("Name of the Thread2: " + t2.getName());
        System.out.println("ID of the Thread2: " + t2.getId());
    }
}
