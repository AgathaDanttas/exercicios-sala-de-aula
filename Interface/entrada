package grafica01;
import java.util.Scanner;
import javax.swing.JOptionPane;


public class interface1 {

		
	public static void main(String[] args) {	
		      
			Calculo instcal = new Calculo();
			int i = 1;
			int somames = 0;
			while(i <= 3) {
			String inputMes = JOptionPane.showInputDialog("Digite o valor do " + i + "° Mês");
			int m = Integer.parseInt(inputMes);
			somames+=m;
			i++;
			}
			instcal.somames = somames;
			
			String inputTr = JOptionPane.showInputDialog("Digite o valor do Tempo de Reposição");
			instcal.tr = Integer.parseInt(inputTr);
			String inputLr = JOptionPane.showInputDialog("Digite o valor do Lote de Reposição");
			instcal.lr = Integer.parseInt(inputLr);
			String inputEa = JOptionPane.showInputDialog("Digite o valor do Estoque Atual");
			int ea = Integer.parseInt(inputEa);
			
			instcal.calculoVMD();
			instcal.calculoEmi();
			instcal.calculoEma();
			if(ea <= instcal.emi) {
			JOptionPane.showConfirmDialog(null,"Resultado\nVMD: "+
			instcal.vmd +"\nEstoque Mínimo:"+ instcal.emi +"\nEstoque Máximo: "+
			instcal.ema +"\nÉ necessário realizar compra do produto");
			}
			else {
			JOptionPane.showConfirmDialog(null,"Resultado\nVMD: "+ instcal.vmd +"\nEstoque Mínimo:"+ instcal.emi +"\nEstoque Máximo: "+
			instcal.ema +"\nNão é necessário realizar compra do produto");
			}
			}
		}
