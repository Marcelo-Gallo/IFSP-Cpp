package A__Ex03_Salario;

public class Salario {
    private int sal;
    private double porc, salAT;
    
    public double calculoAumento(int sal, double porc){
        this.sal = sal;
        this.porc = porc;
        
        salAT = sal + (sal * (porc/100));
        
        return salAT;
    }
    
}
