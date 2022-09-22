package com.company;

class MyThread1 extends Thread {
    @Override
    public void run() {
        for (int counter = 0; counter < 40000; counter++) {
            System.out.println("This is Thread 1*******************");
        }
    }
}

class MyThread2 extends Thread{
    @Override
    public void run(){
        for(int counter=0;counter<40000;counter++){
            System.out.println("This is Thread 2");
        }
    }
}

public class LearningThreads {
    public static void main(String[] args) {
        MyThread1 t1 = new MyThread1();
        MyThread2 t2 = new MyThread2();

        t1.start();
        t2.start();
    }
}
