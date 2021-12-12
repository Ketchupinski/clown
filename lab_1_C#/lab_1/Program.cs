/*
 Реалізувати клас IntPower. Поле first – дійсне ненульове число; поле second – ціле
число, показник степені. Реалізувати метод power( ) – піднесення числа first до степені
second. Метод має правильно працювати при будь-яких допустимих значеннях first та
second.
 */

namespace l_1
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            IntPower num = new IntPower();
            num.Read();
            num.Display();
            var n = num.power();
            Console.WriteLine(n);
        }
    }
}