package com.company;

class MyRunnableThread1 implements Runnable{
    @Override
    public void run(){
        for(int counter=0;counter<4000;counter++){
            System.out.println("This is Thread 1 **********");
        }
    }
}

class MyRunnableThread2 implements Runnable{
    @Override
    public void run(){
        for(int counter=0;counter<4000;counter++){
            System.out.println("This is Thread 2");
        }
    }
}

public class RunnableThread {
    public static void main(String[] args) {
        MyRunnableThread1 rt1 = new MyRunnableThread1();
        MyRunnableThread2 rt2 = new MyRunnableThread2();

        Thread thread1 = new Thread(rt1);
        Thread thread2 = new Thread(rt2);

        thread1.start();
        thread2.start();
    }
}
