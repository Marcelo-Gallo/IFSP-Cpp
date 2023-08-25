package B__Ex03_Numeros;

public class ordem {
    
    private int n1, n2, n3, na;
    private String resposta;
    
    public String ordenador(int n1, int n2, int n3, int na){
        this.n1 = n1;
        this.n2 = n2;
        this.n3 = n3;
        this.na = na;
        this.resposta = resposta;
        
        if(na>n3){
            this.resposta = na + ", " + n3 + ", " + n2 + ", " + n1;
        }
        else{
            if(na>n2){
                this.resposta = n3 + ", " + na + ", " + n2 + ", " + n1;
            }
            else{
                if(na>n1){
                    this.resposta = n3 + ", " + n2 + ", " + na + ", " + n1;
                }
                else{
                    if(na<n1){
                        this.resposta = n3 + ", " + n2 + ", " + n1 + ", " + na;
                    }
                }
            }
        }
        return this.resposta;
    }
    
}
