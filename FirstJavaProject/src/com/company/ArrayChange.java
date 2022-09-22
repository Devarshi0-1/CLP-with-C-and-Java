package com.company;

public class ArrayChange {

    public static void printArray(int[] arr){
        for(int counter=0;counter<arr.length;counter++){
            System.out.println("Element at Index " + counter + "= " +arr[counter]);
        }
    }

    public static void swap(int x, int y, int[] arr){
        int temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
    }

    public static void main(String[] args) {
        int arr[] = {1,2,3,4,5,6,7};

        System.out.println("Before shifting array");
        printArray(arr);

        for(int i =0;i<arr.length-1;i++) {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }

        System.out.println("\nAfter shifting array");
        printArray(arr);
    }
}
