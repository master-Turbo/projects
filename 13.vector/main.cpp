/*
Роботы и коррупция*
Улучшите электронную очередь для роботов. К нам приходят роботы разного социального статуса. 
Каждый робот вводит не только свой уникальный номер, но и свое место в очереди. Например, 
пусть в нашей очереди 10 роботов и к нам приходит 11-й. Сначала он вводит свой номер, как и 
раньше, а затем свое место в очереди - например, 5. В этом случае он должен оказаться в 
очереди пятым, а все остальные, начиная со старого пятого - подвинуться дальше в конец очереди.
Реализуйте функцию std::vector<int> add_to_position(std::vector vec, int val, int position)
*/

#include <iostream>
#include <vector>

/* Последовательность действий программы
1 создать вектор на 10 элементов с номерами роботов V
2 создать функцию добавления элемента в очередь
*/

std::vector<int> add_to_position(std::vector <int> vec, int num, int position)
{
    std::vector <int> new_vec (vec.size() + 1);
    for(int i = 0; i < vec.size(); i++)
    {
        if(i < position - 1)
        {
            new_vec[i] = vec[i];
        }
        else if(i == position - 1)
        {
            new_vec[position - 1] = num;
        }
        else
        {
            new_vec[i] = vec[i + 1];
        }

    }

}

int main()
{
    std::vector <int> vec = {1,2,3,4,5,6,7,8,9,10};

    int num = 0;
    int position = 0;

    while(num >= 0)
    {
        std::cout << "Enter your number:" << std::endl;
        std::cin >> num;
        std::cout << "Enter your position:" << std::endl;
        std::cin >> position;
        vec = add_to_position(vec, num, position);
    }

    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i];
    }
    

    return 0;
}