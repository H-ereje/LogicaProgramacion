import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String nombre;
    int salarioPorHora, horasTrabajadas;
    System.out.print("Ingrese nombre del empleado: ");
    nombre = sc.next();
    System.out.print("Ingrese salario por hora: ");
    salarioPorHora = sc.nextInt();
    System.out.print("Ingrese cantidad de horas trabajadas en el mes: ");
    horasTrabajadas = sc.nextInt();
    if ((salarioPorHora * horasTrabajadas) > 450000) {
      System.out.println("Nombre: " + nombre + "\nSalario mensual: " + (salarioPorHora * horasTrabajadas));
    } else {
      System.out.println("Nombre: " + nombre);
    }
  }
}