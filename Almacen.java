import java.util.Scanner;
public class Almacen {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.println("Ingrese el número de escritorios:");
        int n=sc.nextInt();
        if(n<5){
            System.out.println("El precio final es: "+n*800000*0.9);
        }else if(n>=5 && n<10){
            System.out.println("El precio final es: "+n*800000*0.8);
        }else if(n>=10){
            System.out.println("El precio final es: "+n*800000*0.6);
        }
    }
}