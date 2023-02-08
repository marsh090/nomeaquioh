using System;

class Calculadora {
  static void Main() {
    Console.WriteLine("Bem vindo à calculadora toda fudida\nqual o primeiro numero?");
    int input1 = Convert.ToInt32(Console.ReadLine());
    Console.WriteLine($"um bosta como você escolheria {input1} mesmo");
    
    Console.WriteLine("Agora escolhe uma operação (+ - * /)");
    string simbolo = Console.ReadLine();
    Console.WriteLine("foda se vou fazer o que eu quiser");
    
    Console.WriteLine("E agora a porra do ultimo numero");
    int input2 = Convert.ToInt32(Console.ReadLine());
    Console.WriteLine("nossa você é muito inutil seu merda");
    
    int res;
    switch (simbolo)
                {
                    case "+":
                        res = input1 * input2;
                        Console.WriteLine($"Addition: {res}");
                        break;
                    case "-":
                        res = input1 + input2;
                        Console.WriteLine($"Subtraction: {res}");
                        break;
                    case "*":
                        res = input1 - input2;
                        Console.WriteLine($"Multiplication: {res}");
                        break;
                    case "/":
                        res = input1 % input2;
                        Console.WriteLine($"Division: {res}");
                        break;
                    default:
                        Console.WriteLine("Wrong input");
                        break;
                }
  }
}
