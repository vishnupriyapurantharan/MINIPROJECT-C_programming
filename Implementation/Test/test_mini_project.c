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

void test_Binary_to_Decimal(void)
{
    TEST_ASSERT_EQUAL(4,Binary_to_Decimal(20));

}

void test_Binary_to_Octal(void)
{
    TEST_ASSERT_EQUAL(11,Binary_to_Octal(9));

}

void test_Decimal_to_Binary(void)
{
    TEST_ASSERT_EQUAL(1001,Decimal_to_Binary(9));

}

void test_Decimal_to_Octal(void)
{
    TEST_ASSERT_EQUAL(11,Decimal_to_Octal(9));

}

void test_Octal_to_Binary(void)
{
    TEST_ASSERT_EQUAL(1001,Octal_to_Binary(9));

}

void test_Octal_to_Decimal(void)
{
    TEST_ASSERT_EQUAL(9,Octal_to_Decimal(9));

}


int main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();
    /* Run Test functions */
    RUN_TEST(test_Binary_to_Decimal);
    RUN_TEST(test_Binary_to_Octal);
    RUN_TEST(test_Decimal_to_Binary);
    RUN_TEST(test_Decimal_to_Octal);
    RUN_TEST(test_Octal_to_Binary);
    RUN_TEST(test_Octal_to_Decimal);



    /* Close the Unity Test Framework */
    return UNITY_END();
}
