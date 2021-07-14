 # TEST PLAN:

## Table no 1: High level test plan

| **Test ID** | **Description** | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|:---:|:---:|:---:|:---:|:---:|:---:|
|  H_01       | Conversion of decimal number 2 to binary  | 2| 10| 10 |Requirement based |
|  H_02       |Conversion of decimal number 0 to binary| 0|0|0|Boundary based    |
|  H_03       | Conversion of decimal number 8 to octal  | 8| 10| 10 |Requirement based |
|  H_04       |Conversion of decimal number 0 to octal| 0|0|0|Boundary based    |
|  H_05       | Conversion of decimal number 10 to hexadecimal  | 10| A| A |Requirement based |
|  H_06       |Conversion of decimal number 0 to hexadecimal| 0|0|0|Boundary based    |
        
## Table no 2: Low level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test** |
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |To click the number of our choice for converting the user input to their expected output (number system)|selecting any integer from 1-12|The type of conversion required by user is obtained|The type of conversion required by user is obtained|Requirement based |
|  L_02       |To check whether the type of conversion is selected and user is able to give their input|Able to provide input from user end| Able to provide the output for the input given from user end|Able to provide the output for the input given from user end |Requirement based|
|  L_03       |To proceed whether to provide input again to convert the input from user end or to end the process|1 |Start with another conversion|Start with another converion|Requirement based|
|  L_04       |To proceed whether to provide input again to convert the input from user end or to end the process|0 |Stop the process and end compilation |Stop the process and end compilation |Requirement based  |

