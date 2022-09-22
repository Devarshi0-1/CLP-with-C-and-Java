package com.company;

interface inface1{
    void meth1();
    void meth2();
}

class inher implements inface1{
    public void meth1(){
        System.out.println("This is meth1");
    }

    public void meth2(){
        System.out.println("This is meth2");
    }
}

public class interfaces {
    public static void main(String[] args) {
        inher i = new inher();
        i.meth1();
    }
}
