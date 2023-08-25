package A_Intruducao_Ex01;

public class Cliente {
    
    private String nome, rg;
    
    public void mostrar(String nome, String rg){
        this.nome = nome;
        this.rg = rg;
        System.out.println("O nome informado foi: " + this.nome +
                            "O rg informado foi: " + this.rg);
    }//fecha o método mostrar
    
    public void mostrarNome(String nome){
        this.nome = nome;
        System.out.println("O nome informado foi: " + this.nome);
    }//fecha o método mostrarNome
    
}//fecha classe
