#include <iostream>

#define FOR_STATEMENT_CYCLE 3
int main(void)
{
	std::cout << "HelloWorld!" << std::endl;

	for (int i = 0; i < FOR_STATEMENT_CYCLE; i++)
	{
		if (i == 0)
			std::cout << "Hello Github!" << std::endl;
		else if (i == 1)
			std::cout << "Hello C!" << std::endl;
		else
			std::cout << "Hello Java!" << std::endl;
	}
	return 0;
}