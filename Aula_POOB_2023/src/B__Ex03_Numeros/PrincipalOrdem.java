package B__Ex03_Numeros;
import javax.swing.JOptionPane;

public class PrincipalOrdem {
    public static void main(String[] args){
        ordem Ordem = new ordem();
        
        JOptionPane.showMessageDialog(null, "A ordem decrescente é: " +
                Ordem.ordenador(
                Integer.parseInt(JOptionPane.showInputDialog("Digite o primeiro numero: ")),
                Integer.parseInt(JOptionPane.showInputDialog("Digite o segundo numero (maior que o anterior): ")),
                Integer.parseInt(JOptionPane.showInputDialog("Digite o terceiro numero (maior que o anterior): ")),
                Integer.parseInt(JOptionPane.showInputDialog("Digite um numero aleatorio: "))
        ));
        
    }
    
}
