package com.company;

abstract class Pen{
    abstract void Write();
    abstract void refill();
}

class FountainPen extends Pen{
    void changeNib(){
        System.out.println("Changing Nib of fountain Pen");
    }

    void Write(){
        System.out.println("Writing with Fountain Pen");
    }

    void refill(){
        System.out.println("Refilling Fountain Pen");
    }
}

public class PenAbstract {
    public static void main(String[] args) {
        FountainPen f = new FountainPen();
        f.Write();
        f.refill();
        f.changeNib();
    }
}
