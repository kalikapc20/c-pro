import java.util.Scanner;
import java.io.Console;

public class f1 {
    public static void main(String[] args) {
     

        System.out.print("Enter first person name: ");
        String name1 = System.console().readLine();


        System.out.print("Enter second person name: ");
        String name2 = System.console().readLine();

        int min = 10;
        int max = 100;
        int sakti = (int)(Math.random() * (max - min + 1) + min);

        System.out.println(name1 + " vs " + name2);
        
        min = 1;
        max = 2;
        int stronger = (int)(Math.random() * (max - min + 1) + min);

        if (stronger == 1) {
            System.out.println(name1 + " is " + sakti +"%" + " more stronger than " + name2 );
        } else  {
        System.out.println(name2 + " is " + sakti +"%" + " more stronger than " + name1 );
        }

        
    }
}