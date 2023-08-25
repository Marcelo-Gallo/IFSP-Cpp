
package A_Intruducao_Ex01;

import javax.swing.JOptionPane; //biblioteca grafica; -A biblioteca a direira esta sempre dentro da que esta a esquerda;


public class Cliente1 {
    private String nome, rg;
    
    public void mostrar (String nome, String rg){
        this.nome = nome;
        this.rg = rg;
        
        JOptionPane.showMessageDialog(null, "O nome informado foi: " + this.nome +
                                                        "\nO RG informado foi: " + this.rg);
    }//Fecha metodo mostrar;
    
    public void mostrarNome(String nome){
        this.nome = nome;
        
        JOptionPane.showMessageDialog(null, "O nome informado foi: " + this.nome);
    }//fecha metodo mostrarNome;
    
}// fecha classe;
