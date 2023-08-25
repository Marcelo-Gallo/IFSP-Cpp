package A__Ex04_Comissão;
import javax.swing.JOptionPane;

public class PrincipalComissão {
    public static void main(String[] args){
        Comissão comissão = new Comissão();
        
        double sal = Double.parseDouble(JOptionPane.showInputDialog("Informe o salario fixo: "));
        double vend = Double.parseDouble(JOptionPane.showInputDialog("Informe as vendas: "));
        
        JOptionPane.showMessageDialog(null,"A comissão do funcionário equivale a: R$"+(comissão.calculo(sal, vend)- sal)+
                                                        ".\nE o slario final equivale a: R$"+ comissão.calculo(sal,vend));
        
    }
    
}
