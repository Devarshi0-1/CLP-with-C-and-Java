package com.company;

interface TVRemote{
    void volumeUp();
    void volumeDown();
}

interface SmartTVRemote extends TVRemote{
    void play();
    void pause();
    void stop();
}

class TV implements SmartTVRemote{

    TV(){
        System.out.println("Turning On the TV...");
    }

    public void volumeUp(){
        System.out.println("Volume +5");
    }
    public void volumeDown(){
        System.out.println("Volume -5");
    }
    public void play(){
        System.out.println("Playing...");
    }
    public void pause(){
        System.out.println("Pause ||");
    }
    public void stop(){
        System.out.println("Stopping...");
    }
}
public class Remote {
    public static void main(String[] args) {
        TV t1 = new TV();
        t1.play();
        t1.volumeUp();
        t1.volumeDown();
        t1.pause();
        t1.stop();
    }
}
