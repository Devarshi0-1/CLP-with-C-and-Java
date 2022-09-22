package com.company;

class Base{
    Base(){
        System.out.println("I am a constructor");
    }

    Base(int a){
        System.out.println("I am a constructor with argument a:" +a);
    }


}
class Derived extends Base{
    Derived(){
        super(0);
        System.out.println("I am a derived class instructor");
    }
}
public class problem5{
    public static void main(String[] args){
        Base b = new Base();
        Derived d = new Derived();
    }
}