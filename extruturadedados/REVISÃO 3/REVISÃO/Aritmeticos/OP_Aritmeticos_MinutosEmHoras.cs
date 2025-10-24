using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;

namespace HelloWorld
{
	public class Program
	{
		public static void Main(string[] args)
		{
		 Console.Write("\nDigite a quantidade de minutos: \n");
        int minutos = Convert.ToInt32(Console.ReadLine());
        
        
			
			int horas, resto;
			
			
	  horas = minutos / 60;
	  resto = minutos % 60;
	    
			
			Console.WriteLine( horas + " Horas e " + resto + " Minutos");
			
			
			
			
		}
	}
}