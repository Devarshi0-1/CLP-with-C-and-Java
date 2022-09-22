package com.company;

import java.security.cert.Extension;

class goodMorning extends Thread {
    int i = 0;

    @Override
    public void run() {
        while (i < 50) {
            try{
                Thread.sleep(200);
            }
            catch (Exception e){
                System.out.println(e);
            }
            System.out.println("Good Morning");
            i++;
        }
    }
}

class welcome extends Thread{
    int i =0;
     @Override
    public void run(){
         while (i<50){
             try{
                 Thread.sleep(200);
             }
             catch (Exception e){
                 System.out.println(e);
             }
             System.out.println("Welcome");
             i++;
         }
     }
}

public class ThreadsPractice1 {
    public static void main(String[] args) {
        goodMorning c1 = new goodMorning();
        welcome c2 = new welcome();

        c1.setPriority(3);
        c1.setPriority(4);

        System.out.println(c1.getPriority());
        System.out.println(c2.getPriority());

//        c1.start();
//        c2.start();
    }
}
