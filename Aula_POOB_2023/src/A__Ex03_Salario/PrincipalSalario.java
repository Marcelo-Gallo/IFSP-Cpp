package A__Ex03_Salario;
import javax.swing.JOptionPane;

public class PrincipalSalario {
    
    public static void main(String[] args){
        Salario salario = new Salario();
        
        int sal = Integer.parseInt(JOptionPane.showInputDialog("Informe o salário do funcionário: "));
        double porc = Double.parseDouble(JOptionPane.showInputDialog("Informe a porcentagem do aumento: "));
        
        JOptionPane.showMessageDialog(null,"O Salario com o aumento de " + porc + "% é: R$" + salario.calculoAumento(sal,porc));
        
        /*outra opção:
        Salario salario = new Salario();
        
        JOptionPane.showMessageDialog(null,"O salario é: " +
            salario.caululoAumento(
                Integer.parseInt(JOptionPane.showInputDialog("Informe o salário do funcionário: ")),
                Integer.parseInt(JOptionPane.showInputDIalog("Informe a porcentagem de aumento: "))
        ));
        
        */
        
    }
    
}
