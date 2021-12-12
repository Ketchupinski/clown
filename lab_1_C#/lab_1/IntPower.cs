/*
 Реалізувати клас IntPower. Поле first – дійсне ненульове число; поле second – ціле
число, показник степені. Реалізувати метод power( ) – піднесення числа first до степені
second. Метод має правильно працювати при будь-яких допустимих значеннях first та
second.
 */

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace l_1
{
    internal class IntPower
    {
        private int first;
        private int second;

        public int GetFirst()
        {
            return first;
        }

        public int GetSecond()
        {
            return second;
        }

        public void SetFirst(int first)
        {
            if (first > 0)
            {
                this.first = first;
            }
        }

        public void SetSecond(int second)
        {
            this.second = second;
        }

        public void Read()
        {
            int a, b;
            do
            {
                Console.WriteLine("Input first: ");
                a = Convert.ToInt32(Console.ReadLine());
                Console.WriteLine("Input second: ");
                b = Convert.ToInt32(Console.ReadLine());
            } while (!(Init(a)));
            this.first = a;
            this.second = b;
        }


        public bool Init(int first)
        {
            if(first > 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        public void Display()
        {
            System.Console.WriteLine("first: " + this.first);
            System.Console.WriteLine("second: " + this.second);
        }

        public double power()
        {
            double result = 1;

            int loop_ends;
            if (second < 0)
                loop_ends = -1 * second;
            else
                loop_ends = second;

            for (int i = 0; i < loop_ends; ++i)
                result *= first;

            if (second < 0)
                result = 1 / result;

            return result;
        }
    }
}
