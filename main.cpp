#include <iostream>
#include <gtest/gtest.h>
#include "Tasks.h"
#include "Functions.h"

int main(int argc,char** argv){
    ::testing::InitGoogleTest(&argc, argv);
    std::cout << "Выполнил: Авраменко Роман Александрович\nГруппа: 453503\n";
    std::cout << "Вариант 1\n";
    int task;
    char *string_1 = new char[80];
    char *string_2 = new char[400];
    char **words = new char *[80];
    for (int i = 0; i < 80;i++){
        words[i] = new char[80];
    }

    std::cout << "Выберите номер задания (1, 2 или 3): ";
    std::cin >> task;

    switch (task){
    case 1:
        Task_1(string_1);
        break;
    case 2:
        Task_2(string_2);
        break;
    case 3:
        Task_3(words);
        break;
    case 4:
        RUN_ALL_TESTS();
        break;
    default:
        std::cout << "Невереный номер задания!\n";
    }

    delete[] string_1;
    delete[] string_2;
    for (int i = 0; i < 80;i++){
        delete[] words[i];
    }
    delete[] words;

    repeat();
}