//240424
//�迭�� �ε���

#include <iostream>

int main()
{
	std::string city[] = { "Korea", "China", "Japan", "America", "India" };
	std::cout << "���� ����� ��������� list, ���� ������ ���Ͻø� ���� �̸��� �Է����ּ���. \n";
	std::string country_input;
	std::cin >> country_input;

	int array_size = sizeof(city)/sizeof(city[0]);
	int loop_cnt = 0;
	if (country_input == "list") {
		for (int i = 0; array_size; i++)
		{
			std::cout << city[i] << " ";
		}
	}
	else
	{
		for (int i = 0; i < array_size; i++)
		{
			if (country_input == city[i])
			{
				std::cout << i << city[i];
			}

			loop_cnt++;
		}
	}

	if (loop_cnt == 5)
	{
		std::cout << "�߸��� �Է��Դϴ�.";
	}
		
	


	return 0;
}