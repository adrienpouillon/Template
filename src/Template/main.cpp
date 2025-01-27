#include "pch.h"
#include "main.h"
#include "Pair.hpp"
#include "Node.hpp"
#include "Iterator.hpp"
#include "Vector.hpp"
#include <iostream>
#include <vector>
int main()
{
#ifdef _DEBUG
	_CrtDumpMemoryLeaks();
#endif

	Pair <int, float> MyPair(2, 54859);

	std::cout << MyPair.Get1() << "," << MyPair.Get2() << std::endl;

	Node <int> tab1(1);
	Node <int> tab2(2);
	Node <int> tab3(3);
	Node <int> tab4(4);
	Node <int> tab5(5);
	Node <int> tab6(6);
	Node <int> tab7(7);
	Node <int> tab8(8);

	tab1.SetNext(&tab2);
	tab2.SetNext(&tab3);
	tab3.SetNext(&tab4);
	tab4.SetNext(&tab5);
	tab5.SetNext(&tab6);
	tab6.SetNext(&tab7);
	tab7.SetNext(&tab8);
	tab8.SetNext(&tab1);

	tab1.SetPrev(&tab8);
	tab2.SetPrev(&tab1);
	tab3.SetPrev(&tab2);
	tab4.SetPrev(&tab3);
	tab5.SetPrev(&tab4);
	tab6.SetPrev(&tab5);
	tab7.SetPrev(&tab6);
	tab8.SetPrev(&tab7);

	/*std::vector<Node<int>*> allNode;
	allNode.push_back(&tab1);
	allNode.push_back(&tab2);
	allNode.push_back(&tab3);
	allNode.push_back(&tab4);
	allNode.push_back(&tab5);
	allNode.push_back(&tab6);
	allNode.push_back(&tab7);
	allNode.push_back(&tab8);*/


	/*for (int j = 0; j < 1000000000; j++)
	{
		for (int i = 0; i < 1000000000;i++)
		{
			if (i % 100 == 0)
			{
				allNode[]
				std::cout << .GetValue() << std::endl;
			}
		}
	}*/
	
	Iterator<int> it(&tab1);

	 it++;

	 *it;

	return 0;
}
