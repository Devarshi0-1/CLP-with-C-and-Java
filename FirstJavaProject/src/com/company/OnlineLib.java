package com.company;

import java.util.Scanner;

class OnlineLiberary {
    Scanner sc = new Scanner(System.in);
    private String[] lib = new String[100];
    private int NoOfBooks = 0;
    private String addBook;
    private int issue;

    public void setNoOfBooks(int B) {
        this.NoOfBooks = B;
    }

    public void setBooks() {
        System.out.println("Enter the Name of the Books in the Lib");
        for (int counter = 0; counter < NoOfBooks; counter++)
            lib[counter] = sc.nextLine();
    }

    public void showAvailableBooks() {
        for (int counter = 0; counter < NoOfBooks; counter++)
            System.out.print(lib[counter] + "\t");
    }

    public void addBook() {
        System.out.println("Enter the Name of the Book you want to add");
        addBook = sc.nextLine();
        lib[NoOfBooks] = addBook;
        NoOfBooks++;
    }

    public void issueBook() {
        System.out.println("Which Book do you want to issue, enter the Index?");
        issue = sc.nextInt();
        for (int counter = issue; counter < NoOfBooks; counter++)
            lib[counter] = lib[counter + 1];
        NoOfBooks--;
    }

    public void returnBook() {
        System.out.println("Enter the Name of the Book you want to Return");
        addBook = sc.nextLine();
        lib[NoOfBooks] = addBook;
        NoOfBooks++;
    }
}

public class OnlineLib {
    public static void main(String[] args) {
        int choice = 0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Original Size of the Lib ");
        OnlineLiberary l1 = new OnlineLiberary();
        l1.setNoOfBooks(sc.nextInt());
        l1.setBooks();
        System.out.println("Which action do you want to perform?");
        System.out.println("Enter '1' for Addition of Book '2' for Issuing a Book '3' for Returning a Book");
        choice = sc.nextInt();
        switch (choice) {
            case 1 -> l1.addBook();
            case 2 -> l1.issueBook();
            case 3 -> l1.returnBook();
            default -> System.out.println("Error!");
        }
        System.out.println("Books in the Library after all the action: ");
        l1.showAvailableBooks();
    }
}
