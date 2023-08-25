package A__Ex02_Notas;
import javax.swing.JOptionPane;

public class PrincipalNota {
    
    public static void main(String[] args){
        /* Nota nota = new Nota();*/
        Nota/*arquivo da classe */ nota /* nome que eu dei*/  = new Nota(); /* criação*/
    
        double n1 = Double.parseDouble(JOptionPane.showInputDialog("Informe a Nota1: "));
        double n2 = Double.parseDouble(JOptionPane.showInputDialog("Informe a Nota2: "));
        double n3 = Double.parseDouble(JOptionPane.showInputDialog("Informe a Nota3: "));
        int p1 = Integer.parseInt(JOptionPane.showInputDialog("Informe o peso1: "));
        int p2 = Integer.parseInt(JOptionPane.showInputDialog("Informe o peso2: "));
        int p3 = Integer.parseInt(JOptionPane.showInputDialog("Informe o peso3: "));
        
        JOptionPane.showMessageDialog(null,nota.calcularMedia(n1,n2,n3,p1,p2,p3));
    }
        
    
    
}
