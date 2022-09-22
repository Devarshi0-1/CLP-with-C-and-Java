package com.company;


public class strings {
    public static void main(String[] args) {
//        String name = "Devarshi";  // No matter how much we try the original string will not change
//        String a1 = new String("Harry")
//        System.out.println("Your string is " + name);
//        All the functions return a different string not the original one
//        System.out.println("Length of this string is: " + name.length());
//        System.out.println("Lower case of your string is: " + name.toLowerCase());
//        System.out.println("Upper case of your string is: " + name.toUpperCase());
//        System.out.println("Your original string is: " + name);
//        String nonTrimString = "   Devarshi   ";
//        System.out.println(nonTrimString);
//        System.out.println(nonTrimString.trim());
//        System.out.println(name.substring(3));
//        System.out.println(name.substring(2, 5));
//        System.out.println(name.replace('r', 'p'));
//        System.out.println(name.replace("shi", "LLP"));
//        System.out.println(name.startsWith("Dev"));
//        System.out.println(name.endsWith("shi"));
//        System.out.println(name.charAt(0));
        String modified_name = "Devarshishi";
        System.out.println(modified_name.indexOf("shi"));
        System.out.println(modified_name.indexOf("shi", 6));
        System.out.println(modified_name.lastIndexOf("shi", 7));
        System.out.println(modified_name.equals("Devarshis"));
        System.out.println(modified_name.equalsIgnoreCase("devarshishi"));
    }
}
