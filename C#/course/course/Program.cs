Console.Write("Digite seu nome: "); // Write serve para o progroma não ter quebra de linha durante a apresentação do texto.
// C# é uma linguagem case sensitive ou seja, se for maiusculo tem de ser maiusculo e vice versa exemplo Console se for digitado
// console em minusculo o programa ira dar erro.
string nome = Console.ReadLine(); // Readline é o comando para a captura da string digitada pelo o usuario se solicitado.
Console.WriteLine($"Olá {nome}!"); // o comando $ e os colchetes servem para a inserção da variavel no texto a ser mostrado no programa.
Console.Write($"Agora {nome} por favor digite sua idade: ");
int idade = int.Parse(Console.ReadLine()); // o comando int.Parse lembre-se sempre de utilizar é para a conversão da string para um inteiro.
int ano = 2022 - idade;
Console.WriteLine($"Então {nome} você tem {idade} anos e nasceu no ano de {ano}!");

string[] names = { "Martonyelle", "Natyelle", "Daniel", "Emmanuel" }; //Declaração de array(vetor) pelo dev.

    for (int i = 0; i < 4; i++) 
    {
        Console.WriteLine(names[i]);
    } // Estrutura for Simples. Para a utilização do array bidmensional vulgo matriz vc já sabe.

    // pode se usar o comando foreach também, procure saber um pouco mais no futuro sobre.