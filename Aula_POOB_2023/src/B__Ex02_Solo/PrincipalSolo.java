package B__Ex02_Solo;
import javax.swing.JOptionPane;

public class PrincipalSolo {
    public static void main(String[] args){
        Solo solo = new Solo();
    
        JOptionPane.showMessageDialog(null, "O solo é: " + 
            solo.analise(
            Double.parseDouble(JOptionPane.showInputDialog("Pontos de agua: "))
            ));    
    }
    
}
