#include <gtest/gtest.h>
#include "Functions.h"

TEST(Task_1, Regular_Test_1){
    int size = 10;
    char string[] = "10010 101";

    EXPECT_EQ(FindGroups(string, size), 1);
}

TEST(Task_1, Regular_Test_2){
    int size = 8;
    char string[] = "100 001";

    EXPECT_EQ(FindGroups(string, size), 0);
}

TEST(Task_1, Regular_Test_3){
    int size = 34;
    char string[] = "10000110 00110   1000     10100  ";

    EXPECT_EQ(FindGroups(string, size), 2);
}

TEST(Task_1, Regular_Test_4){
    int size = 38;
    char string[] = "1000110 10101 0 110000 1110     01011";

    EXPECT_EQ(FindGroups(string, size), 2);
}

TEST(Task_1, Regular_Test_5){
    int size = 37;
    char string[] = "100 0101 100 001 0100 000 110 101 00";

    EXPECT_EQ(FindGroups(string, size), 0);
}

TEST(Task_1, Regular_Test_6){
    int size = 26;
    char string[] = "0000000000000000000000000";

    EXPECT_EQ(FindGroups(string, size), 0);
}

TEST(Task_1, Regular_Test_7){
    int size = 24;
    char string[] = "11111 11111 11111 11111";

    EXPECT_EQ(FindGroups(string, size), 4);
}

TEST(Task_1, Regular_Test_8){
    int size = 30;
    char string[] = "10100 111010101 10010 1 11000 001";

    EXPECT_EQ(FindGroups(string, size), 3);
}

TEST(Task_1, Empty_String){
    int size = 1;
    char string[] = "";

    EXPECT_EQ(FindGroups(string, size), 0);
}

TEST(Task_1, Only_Spaces){
    int size = 18;
    char string[] = "                 ";

    EXPECT_EQ(FindGroups(string, size), 0);
}


TEST(Task_2, Regular_Test_1){
    int size = 15;
    char string[] = "Hello, World!\n";
    int cost = 1;

    EXPECT_EQ(CountWords(string, size) * cost, 2);
}

TEST(Task_2, Regular_Test_2){
    int size = 12;
    char string[] = "Privet,vse!\n";
    int cost = 1;

    EXPECT_EQ(CountWords(string, size) * cost, 1);
}

TEST(Task_2, Regular_Test_3){
    int size = 75;
    char string[] = "Computer science is the study of computation, information, and automation.\n";
    int cost = 1;

    EXPECT_EQ(CountWords(string, size) * cost, 10);
}

TEST(Task_2, Regular_Test_4){
    int size = 182;
    char string[] = "Mathematics is a field of study that discovers and organizes methods, theories and theorems that are developed and proved for the needs of empirical sciences and mathematics itself.\n";
    int cost = 4;

    EXPECT_EQ(CountWords(string, size) * cost, 112);
}

TEST(Task_2, Regular_Test_5){
    int size = 236;
    char string[] = "Contests are partitioned geographically into ICPC Regions, and every degree-granting team institution is assigned a home ICPC Region, which determines the only advancement path available for all teams having the same team institution.\n";
    int cost = 4057;

    EXPECT_EQ(CountWords(string, size) * cost, 133881);
}

TEST(Task_2, Regular_Test_6){
    int size = 229;
    char string[] = "In 1979, Bjarne Stroustrup, a Danish computer scientist, began work on C with Classes, the predecessor to C++. The motivation for creating a new language originated from Stroustrup's experience in programming for his PhD thesis.\n";
    int cost = 0;

    EXPECT_EQ(CountWords(string, size) * cost, 0);
}

TEST(Task_2, Regular_Test_7){
    int size = 293;
    char string[] = "International seminars and conferences are held at the university on the regular basis. In 1997, the seminar Management of Higher Educational Institutions was held. Two German universities (the Higher Technical School of Mittweide and the University of Wuppertal) participated in the seminar.\n";
    int cost = 1;

    EXPECT_EQ(CountWords(string, size) * cost, 42);
}

