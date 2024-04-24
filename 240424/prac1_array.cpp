//240424
//배열과 인덱스

#include <iostream>

int main()
{
	std::string city[] = { "Korea", "China", "Japan", "America", "India" };
	std::cout << "나라 목록을 보고싶으면 list, 나라 선택을 원하시면 나라 이름을 입력해주세요. \n";
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
		std::cout << "잘못된 입력입니다.";
	}
		
	


	return 0;
}