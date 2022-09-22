package com.company;

class ThreadPriority extends Thread{
    @Override
    public void run(){
        for(int counter=0;counter<4000;counter++){
            System.out.println("This is Max Priority Thread ****************************");
        }
    }
}

class ThreadPriority2 extends Thread{
    @Override
    public void run(){
        for(int counter=0;counter<4000;counter++){
            System.out.println("This is Normal Priority Thread *****");
        }
    }
}

class ThreadPriority3 extends Thread{
    @Override
    public void run(){
        for(int counter=0;counter<4000;counter++){
            System.out.println("This is Min Priority Thread *");
        }
    }
}

public class Thread_Priority {
    public static void main(String[] args) {
        ThreadPriority t1 = new ThreadPriority();
        ThreadPriority2 t2 = new ThreadPriority2();
        ThreadPriority3 t3 = new ThreadPriority3();

        t1.setPriority(Thread.MAX_PRIORITY);
        t1.setPriority(Thread.NORM_PRIORITY);
        t1.setPriority(Thread.MIN_PRIORITY);

        t1.start();
        t2.start();
        t3.start();
    }
}
