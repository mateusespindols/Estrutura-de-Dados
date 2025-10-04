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
		  float n;
		  
			Console.WriteLine("insira sua nota:");
		 n = float.Parse(Console.ReadLine());
		
		  if (n<5){
		    Console.WriteLine("Você está reprovado");
		  } else if (n<6){
		    Console.WriteLine("Você está de recuperação ");
		  } else {
		    Console.WriteLine("Você está aprovado");
		  }
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		  
		}
	}
}