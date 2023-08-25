package A__Ex04_Comissão;


public class Comissão {
    private double sal, vend, salF;
    
    public double calculo(double sal, double vend){
        this.sal = sal;
        this.vend = vend;
        
        this.salF = sal + (vend*0.04);
        
        return salF;
        
        /* outra opção:
        calcular comissão e salario final e retorno como string assim:
        return "A comissão é :" + this.valorComissão + "O valor do salario é: " + this.valorSalario;
        ambos "valor" seriam variaveis que eu calculei e trocar o retorno para String;
        */
    }
    
}
