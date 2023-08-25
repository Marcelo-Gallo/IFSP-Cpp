package B__Ex02_Solo;

public class Solo {
    private double pontos;
    private String resposta;
    
    public String analise(double pontos){
    this.pontos = pontos;
    
    if(this.pontos<=10){
        this.resposta = "Rochosa";
    }
    else{
        if(this.pontos>10 && this.pontos<=40){
            this.resposta = "Firme";
        }
        else{
            if(this.pontos>40 && this.pontos<=80){
                this.resposta = "Pantanosa";
            }
            else{
                this.resposta = "Amostra invalida";
            }
        }
    }
    
    
    return this.resposta;
}
    
}
