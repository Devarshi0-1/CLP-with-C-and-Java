package com.company;

import java.util.Scanner;

public class encrypt_decrypt_char {
    public static void main(String[] args) {
        char grade = 'B';
        // Encrypting
        grade = (char) (grade + 8);
        System.out.println("Your encrypted grade is " + grade);
        // Decrypting
        System.out.println("After decrypting your grade is " + (char) (grade - 8));
    }
}
