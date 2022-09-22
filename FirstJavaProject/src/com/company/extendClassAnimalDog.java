package com.company;


import java.util.Scanner;

class animal{
    int legs;

    public void setLegs(int legs) {
        this.legs = legs;
    }


    public int getLegs(){
        return legs;
    }

}

class dog extends animal{
    String name;
    int tail;

    public void setTail(int t){
        this.tail = t;
    }

    public int getTail(){
        return tail;
    }
}
public class extendClassAnimalDog {
    public static void main(String[] args) {
        animal a1 = new animal();
        System.out.println("Enter the number of legs the animal has: ");
        Scanner sc = new Scanner(System.in);
        a1.setLegs(sc.nextInt());
        System.out.println("Legs of the animal = " + a1.getLegs());

        dog d1 = new dog();
        System.out.println("Do the Dog have a long tail: \n 0 for No \n 1 for Yes");
        d1.setTail(sc.nextInt());
        System.out.println(d1.getTail());
    }
}
