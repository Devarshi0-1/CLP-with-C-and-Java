package com.company;

import java.util.Scanner;

class person{
    private String name;
    private int age;
    private float salary;


    public void setName(String n){
        this.name=n;
    }
    public void setAge(int a){
        this.age=a;
    }
    public void setSalary(float s){                     //void matlab hum kuch return nhi kra rhe
        this.salary=s;
    }
    public int getAge(){
        return  age;
    }
    public float getSalary(){
        return  salary;

    }
    public String getName(){
        return name;
    }

}
public class person1             {                                      //same class name like the file name compulsory....
    public static void main(String[] args) {
        person r1 = new person();                            //   idhar jo upper class ka name lenge upper wali class ke name se same hoga
        Scanner sc = new Scanner(System.in);
        Scanner sc1 = new Scanner(System.in);

        System.out.println("enter the age of a person: ");
        r1.setAge(sc.nextInt());
        System.out.println("enter the name: ");
        r1.setName(sc1.nextLine());
        System.out.println("enter the salary: ");
        r1.setSalary(sc.nextFloat());
        System.out.println("the age: " + r1.getAge() + "\n the salary: " + r1.getSalary() + "\n the name: " + r1.getName());
    }
}