package com.company;

import java.util.Scanner;

class Employee {
    int salary;
    String name;

    public String getName() {
        return name;
    }

    public int getSalary() {
        return salary;
    }

    public void setName(String n){
        name = n;
    }
}

public class class_employee {
    public static void main(String[] args) {
        Employee devarshi = new Employee();
        Employee shubham = new Employee();
        devarshi.setName("Devarshi Dwivedi");
        devarshi.salary = 100;
        shubham.setName("Shubham Yadav");
        shubham.salary = 50;
        System.out.println("Name of Employee-1: " + devarshi.getName());
        System.out.println("Salary of Employee-1: " + devarshi.getSalary());
        System.out.println("Name of Employee-2: " + shubham.getName());
        System.out.println("Salary of Employee-2: " + shubham.getSalary());
    }
}
