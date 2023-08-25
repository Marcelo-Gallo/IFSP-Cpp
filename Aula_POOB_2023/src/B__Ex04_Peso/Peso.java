package B__Ex04_Peso;

public class Peso {
    private float altura, peso;
    private String resposta;
    
    public String analise(float altura, float peso){
        this.altura = altura;
        this.peso = peso;
        this.resposta = resposta;
        
        
        
        if(altura<1.20){
            if(peso<=60){
                this.resposta = "A";
            }
            else{
                if(peso>60 && peso<=90){
                    this.resposta = "D";
                }
                else{
                    if(peso>90){
                        this.resposta = "G";
                    }
                }
            }
        }
        
        else{
            if(altura>=1.20 && altura<=1.70){
                if(peso<=60){
                   this.resposta = "B";
                }
                else{
                    if(peso>60 && peso<=90){
                        this.resposta = "E";
                    }
                    else{
                        if(peso>90){
                            this.resposta = "H";
                        }
                    }
                }
            }
        
        
            else{
                if(altura>1.70){
                    if(peso<=60){
                        this.resposta = "C";
                    }
                    else{
                        if(peso>60 && peso<=90){
                            this.resposta = "F";
                        }
                        else{
                            if(peso>90){
                                this.resposta = "I";
                            }
                        }
                    }
                }
            }
        }
        return this.resposta;  
    }
}
