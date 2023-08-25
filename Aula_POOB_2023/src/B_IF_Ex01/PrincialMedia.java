package B_IF_Ex01;
import javax.swing.JOptionPane;

public class PrincialMedia {
    
    public static void main(String[] args){
        Media media = new Media();
        
        JOptionPane.showMessageDialog(null, "A situação do aluno é: " + 
                media.calcular(
                Double.parseDouble(JOptionPane.showInputDialog("Primeira nota: ")) ,
                Double.parseDouble(JOptionPane.showInputDialog("Segunda nota: "))
                ));
    }
}
