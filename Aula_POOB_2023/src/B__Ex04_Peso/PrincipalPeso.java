package B__Ex04_Peso;
import javax.swing.JOptionPane;

public class PrincipalPeso {
    public static void main(String[] args){
        Peso peso = new Peso();
        
        JOptionPane.showMessageDialog(null, "A classificação da pessoa é: " +
        peso.analise(
        Float.parseFloat(JOptionPane.showInputDialog("Digite a altura da pessoa: ")),
        Float.parseFloat(JOptionPane.showInputDialog("Digite o peso da pessoa: "))
        ));
        
    }
    
}
