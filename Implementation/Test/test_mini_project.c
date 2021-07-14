#include "mini_project.h"
#include "unity.h"
#include<stdio.h>

/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

void test_Bin_to_Dec(void)
{
    TEST_ASSERT_EQUAL(4,Bin_to_Dec(20));

}

void test_Bin_to_Oct(void)
{
    TEST_ASSERT_EQUAL(11,Bin_to_Oct(9));

}

void test_Dec_to_Bin(void)
{
    TEST_ASSERT_EQUAL(1001,Dec_to_Bin(9));

}

void test_Dec_to_Oct(void)
{
    TEST_ASSERT_EQUAL(11,Dec_to_Oct(9));

}

void test_Oct_to_Bin(void)
{
    TEST_ASSERT_EQUAL(1001,Oct_to_Bin(9));

}

void test_Oct_to_Dec(void)
{
    TEST_ASSERT_EQUAL(9,Oct_to_Dec(9));

}


int main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();
    /* Run Test functions */
    RUN_TEST(test_Bin_to_Dec);
    RUN_TEST(test_Bin_to_Oct);
    RUN_TEST(test_Bin_to_Hex);
    RUN_TEST(test_Dec_to_Bin);
    RUN_TEST(test_Dec_to_Oct);
    RUN_TEST(test_Dec_to_Hex);
    RUN_TEST(test_Oct_to_Bin);
    RUN_TEST(test_Oct_to_Dec);
    RUN_TEST(test_Oct_to_Hex);
    RUN_TEST(test_Hex_to_Dec); 
    RUN_TEST(test_Hex_to_Bin);  

    /* Close the Unity Test Framework */
    return UNITY_END();
}
