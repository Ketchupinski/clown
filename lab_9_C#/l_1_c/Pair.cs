using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace l_1_c
{
    internal class Pair
    {
		private int first;
		private int second;

		public int GetFirst() { return first; }
		public int GetSecond() { return second; }

		public void SetFirst(int first)
        {
			this.first = first;
        }
		
		public void SetSecond(int second)
        {
			this.second = second;
        }


		public Pair() {
			first = 0;
			second = 0;
		}

		public Pair(int first, int second) {
			if (first > 0 || first == 0 && second > 0)
			{
				this.first = first;
				this.second = second;
			}
		}

		public Pair(Pair p)
        {
			if (p.first > 0 || p.first == 0 && p.second > 0)
			{
				first = p.first;
				second = p.second;
			}
        }

		~Pair() { }

	public void Equal(Pair p)
	{
		if (this.first > p.first || (this.first == p.first && this.second > p.second))
		{
				Console.WriteLine("Bigger");
		}
		if (p.first > this.first || (p.first == this.first && p.second > this.second))
		{
				Console.WriteLine("Lower");
			}
		if (p.first == this.first && this.second == p.second)
		{
				Console.WriteLine("Same");
			}
	}

		public void Display()
		{
			Console.WriteLine("first: " + first);
			Console.WriteLine("second: " + second);
		}


		public static Pair operator ++(Pair f)
		{
			return new Pair(f.first++, f.second++);
		}

		public static Pair operator --(Pair f)
		{
			return new Pair(f.first--, f.second--);
		}


		public static String ToString(Pair f)
		{
			String s = "\nFirst: " + f.first + "\nSecond: " + f.second;
			return s;
		}

		public static bool operator ==(Pair f1, Pair f2)
		{
			if (f1.first == f2.first && f1.second == f2.second)
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		public static bool operator !=(Pair f1, Pair f2)
		{
			if (f1.first == f2.first && f1.second == f2.second)
			{
				return false;
			}
			else
			{
				return true;
			}
		}

		public static bool operator >(Pair f1, Pair f2)
		{
			if (f1.first > f2.first || (f1.first == f2.first && f1.second > f2.second))
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		public static bool operator <(Pair f1, Pair f2)
		{
			if (f1.first < f2.first || (f1.first == f2.first && f1.second < f2.second))
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
