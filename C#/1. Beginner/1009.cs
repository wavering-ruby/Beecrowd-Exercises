using System;

class Program
{
    static void Main()
    {
        // Lê o nome
        string nome = Console.ReadLine();
        
        // Lê os valores double
        double n = double.Parse(Console.ReadLine());
        double m = double.Parse(Console.ReadLine());
        
        // Calcula o salário
        double sal = n + (m * 0.15);
        
        // Exibe o resultado formatado
        Console.WriteLine($"TOTAL = R$ {sal:F2}");
    }
}
