
import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc=new Scanner (System.in);
	    System.out.println("Ingrese el promedio");
	    double promedio=sc.nextInt();
	    System.out.println("Ingrese el tipo de estudio");
	    String estudio=sc.next();
	    
	    if(promedio>=4.5&&estudio=="pregrado"){
	        System.out.println("Cursará 28 créditos y se le hará un 25% de descuento");}
	    if(promedio>=4.0&&promedio<4.5&&estudio=="pregrado"){
	        System.out.println("Cursará 25 créditos y se le hará un 10% de descuento");}
	    if(promedio>3.5&&promedio<4.0&&estudio=="pregrado"){
	        System.out.println("Cursará 20 créditos y no tendrá ningún descuento");}
	    if(promedio>=2.5&&promedio<3.5&&estudio=="pregrado"){
	        System.out.println("Cursará 15 créditos y no tendrá descuento");}
	    if(promedio<2.5&&estudio=="pregrado"){
	        System.out.println("No podrá matricularse");}
	    if(promedio>=4.5&&estudio=="posgrado"){
	        System.out.println("Cursará 20 créditos y se le hará un 20% de descuento");}
	    if(promedio<4.5&&estudio=="posgrado"){
	        System.out.println("Cursará 10 créditos y no tendrá descuento");}
	}
}