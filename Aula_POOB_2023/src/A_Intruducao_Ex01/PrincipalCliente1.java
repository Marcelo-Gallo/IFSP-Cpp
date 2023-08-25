package A_Intruducao_Ex01;
import javax.swing.JOptionPane;

public class PrincipalCliente1 {
    
    public static void main(String[] args){
        Cliente1 cliente1 = new Cliente1();
    
        System.out.println("====Chamando os métodos do Objeto ====");
        
        cliente1.mostrar(JOptionPane.showInputDialog("Informe o nome: "),
                         JOptionPane.showInputDialog("Informe o RG: "));
        
        cliente1.mostrarNome(JOptionPane.showInputDialog("Informe o nome 2: "));
        
        System.out.println("====Fim da chamada ais métodos do objeto ====");
    }//fecha main
}//fecha classe
