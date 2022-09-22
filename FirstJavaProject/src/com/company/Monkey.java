package com.company;

class MonkeyClass{
    public void jump(){
        System.out.println("Jumping");
    }

    public void bite(){
        System.out.println("Biting");
    }

}

interface BasicAnimal{
    void eat();
    void sleep();
}

class Human extends MonkeyClass implements BasicAnimal{
    public void eat(){
        System.out.println("Eating");
    }
    public void sleep(){
        System.out.println("Sleeping");
    }
}

public class Monkey {
    public static void main(String[] args) {
        Human h = new Human();
        h.jump();
        h.bite();
        h.eat();
        h.sleep();

    }
}
