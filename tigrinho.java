import java.util.Random;
import java.util.Scanner;
import java.text.DecimalFormat;
public class tigrinho {
    public static void main(String[] args) {
    System.out.println("Vamos jogar tigrinho.");
    float aposta= 0, casa_ganha=0, jogador_ganha=0,banca;
    DecimalFormat df = new DecimalFormat("#.##");
    double apostas_totais = 0;
    char retry = 'y';
    Random rand = new Random();
    Scanner sc = new Scanner(System.in);
    
    System.out.print("Digite seu nome: ");
    String nome = sc.nextLine();
    System.out.print("Digite sua banca inicial "+nome+": ");
    banca = sc.nextInt();
    
    while(retry == 'y' || retry == 'Y'){
    System.out.print("Digite o quanto quer apostar: ");
    aposta = sc.nextInt();
    if(aposta<=banca){apostas_totais += aposta;
    banca-=aposta;}else{System.out.print("Digite um numero valido ");}
    if(rand.nextInt(100)<=65){
        casa_ganha++;
        System.out.println("A casa ganhou haha.");
        System.out.print("Banca atual: "+banca);
    }else {
    jogador_ganha++;
    System.out.println("Voce ganhou parabens!");
    banca=aposta*2+banca;
    System.out.println("Banca atual: "+banca);}
                System.out.println(" Quer apostar denovo? (y/n): ");
            retry = sc.next().charAt(0);
    }System.out.print(apostas_totais);
}}
