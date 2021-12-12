namespace l_1_c
{
    internal class Program
    {
        public static void Main(String[] args)
        {
            Pair p = new Pair(1, 5);
            p.Display();

            Pair l = new Pair(2, 7);
            l.Display();

            p.Equal(l);

            bool check = p == l;
            Console.WriteLine("p == l: " + check);

            Console.WriteLine("\n\nFractions:");
            Fraction f = new Fraction(p);
            f.Display();
            Fraction s = new Fraction(l);
            s.Display();

            f.Equal(s);

            check = f == s;
            Console.WriteLine("f == s: " + check);

            check = f != s;
            Console.WriteLine("f != s: " + check);

            check = f > s;
            Console.WriteLine("f > s: " + check);

            check = f < s;
            Console.WriteLine("f < s: " + check);

        }
    }
}