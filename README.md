# holbertonschool-low_level_programming

## This project is about learning the basics of C programming

### comments :
(comments will be ignored by the compiler)

- // -> single line comments
- /* single line comments v2 */
- /**
- \* multiline                           
- \* comments
- */  

### variables :
- `int` -> stores integers without decimal {123 or -123}
- `float` -> stores floating point numbers {19.99 or -19.99}
- `char` -> stores single characters surrounded by single quotes {'a' or 'B'}

#### format specifiers : 
It is a placeholder for the variable value it starts with a % followed by a character : printf("%d")

- `int` -> %d 	
- `float` -> %f (6/7 decimal) by using a . you can specify how many digits should be shown -> %.1f / %.3f 
- %lf for double (15) 	
- `char` -> %c
- `string` -> %s a string is used to store multiple character or whole words   
	char txt[] = "text";
	printf("%s", txt);
 - %lu -> to get the size of a data type or variable, use it with the `sizeof` operator    
			 
						`int` myInt;
						`float` myFloat;
						`double` myDouble;
						`char` myChar;

						printf("%lu\n", sizeof(myInt));
						printf("%lu\n", sizeof(myFloat));
						printf("%lu\n", sizeof(myDouble));
						printf("%lu\n", sizeof(myChar));


With float you define how many digit should be shown after the decimal point 
- printf("%.1f) -> 3.5
- printf("%.2f) -> 3.55
- printf("%.4f) -> 3.5555

To make a variable unchangeable use the const keyword
- const int myNum = 15;
A good practice is to write/declare the name of the constant in uppercase
- const int MYNUM = 15;

- ++ increase the value of a variable by 1
- -- decrease the value of a variable by 1
- += adds value to a variable {+=5 -> +5 to variable}
 
