using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace l_1_c
{
    internal class Fraction : Pair
    {
		public Fraction() : base() { }
		public Fraction(int f, int s) : base(f, s) { }
		public Fraction(Pair p) : base(p) {}

		~Fraction() { }

		public static String ToString(Fraction f)
		{
			String s = "\nFirst: " + f.GetFirst() + "\nSecond: " + f.GetSecond();
			return s;
		}

		public static bool operator ==(Fraction f1, Fraction f2)
		{
			if (f1.GetFirst() == f2.GetFirst() && f1.GetSecond() == f2.GetSecond())
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		public static bool operator !=(Fraction f1, Fraction f2)
		{
			if (f1.GetFirst() == f2.GetFirst() && f1.GetSecond() == f2.GetSecond()) 
			{
				return false;
			}
			else
			{
				return true;
			}
		}

		public static bool operator >(Fraction f1, Fraction f2)
		{
			if (f1.GetFirst() > f2.GetFirst() || (f1.GetFirst() == f2.GetFirst() && f1.GetSecond() > f2.GetSecond()))
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		public static bool operator <(Fraction f1, Fraction f2)
		{
			if (f1.GetFirst() < f2.GetFirst() || (f1.GetFirst() == f2.GetFirst() && f1.GetSecond() < f2.GetSecond()))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
}
