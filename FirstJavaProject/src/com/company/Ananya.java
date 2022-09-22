package com.company;

import java.util.Scanner;

class MyNumber {
    protected int a[];

    public MyNumber(int n) {
        a = new int[n];
    }

    public MyNumber(int[] a) {
        this.a = a;
    }
}

class ArrayFun extends MyNumber {

    public ArrayFun(int n) {
        super(n);
    }

    public ArrayFun(int[] a) {
        super(a);
    }

    public ArrayFun(int n, Scanner sc) {
        this(n);
        this.input(sc);
    }

    private void input(Scanner sc) {
        for (int i = 0; i < a.length; i++) {
            a[i] = sc.nextInt();
        }
    }

    public double getMean() {
        double sum = 0.0;
        for (int i = 0; i < a.length; i++) {
            sum += a[i];
        }
        return sum / a.length;

    }

    public double getMedian() {
        int b[] = new int[a.length];
        int i = 0;
        for (i = 0; i < a.length; i++) {
            b[i] = a[i];
        }
        for (i = 0; i < b.length; i++) {
            for (int j = i + 1; j < b.length; j++) {
                if (b[i] > b[j]) {
                    int temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }

        if (b.length % 2 == 0) {
            return (b[b.length / 2] + b[(b.length / 2) - 1]) / 2.0;
        } else {
            return 0.0 + b[b.length / 2];
        }
    }

    public int getMode() {
        int maxValue = 0, maxCount = 0, i, j;

        for (i = 0; i < a.length; i++) {
            int count = 0;
            for (j = 0; j < a.length; j++) {
                if (a[j] == a[i])
                    ++count;
            }

            if (count > maxCount || (count == maxCount && a[i] > maxValue)) {
                maxCount = count;
                maxValue = a[i];
            }
        }
        return maxValue;
    }
}

class ArrayX extends ArrayFun {
    public ArrayX(int n, Scanner sc) {
        super(n, sc);
    }

    public void displayAttributes() {
        System.out.println("Mean: " + this.getMean());
        System.out.println("Median: " + this.getMedian());
        System.out.println("Mode: " + this.getMode());
    }
}

public class Ananya {
    public static void main(String ar[]) {
        ArrayX[] arrayX = new ArrayX[2];
        arrayX[0] = new ArrayX(5, new Scanner(System.in));
        arrayX[1] = new ArrayX(4, new Scanner(System.in));

        for (ArrayX arx : arrayX) {
            arx.displayAttributes();
        }
    }
}