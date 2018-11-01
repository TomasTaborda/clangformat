namespace Tomas
{
class Pepe
{
public:
    int* x;
	void function(bool b)
	{
		if (b)
		{
			*x++;
		}
		else
		{
			*x--;
		}

		if (!b)
			*x--;

		for (int n : {0, 1, 2, 3, 4, 5})
		{
		    std::cout << n << ' ';
			std::cout << '\n';
		}
	}
};
};


  
