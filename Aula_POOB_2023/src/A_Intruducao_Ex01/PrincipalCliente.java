package A_Intruducao_Ex01;

public class PrincipalCliente {
    
    public static void main(String[] args) {
        Cliente cliente = new Cliente(); //CRIAÇÃO DE OBJETO
        
        System.out.println("==== Chamando os métodos do objeto ====\n");
        
        cliente.mostrar("Prof. André Gobbi", "11.111.111-11");
        cliente.mostrar("Prof. Ivan Lopes", "22.222.222-22");
        cliente.mostrarNome("Prof. André Gobbi");
        cliente.mostrarNome("Prof. Ivan Lopes");
        
        System.out.println("==== Fim da chamada aos métodos do objeto ====\n");
        
    }//Fecha main
}//Fecha classe
