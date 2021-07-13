## Variables

Variables represents some memory locations for a sppecific data type.
variables stores data of its own type.i.e.integer variables can store only integer data.

Typical syntax for declaring variable.
data_type variable_name; or data_type variable_name=value;
For exmple:-
int a;
double b=2.3;(b is an identifier representing the variable and 2.3 is a value stored in this variable.
char c='A';

## Integer Constants
Integer constants can be written in decimal,hexadecimal and octal number system.
ex.23,45,0,65,0101,0x41.etc.
Using some suffix letter at an end of the integer constant can give some special meaning.
For example.:- 12L (Long integer constant)
360U,987u:-Represents unsigned integer constant.

## Floating point constants
Floating point constants represents fractional numbers.
They can be written in floating point format.(e.g.12.4,+0.0389,-2.76)or exponential format(e.g.124e+1,+3.89-2,-2.76e+0)
Suffix f for the floating point constant will represent float constant.(ex.12.4f)

## Character constants
character constant represents a single character.
They are always enclosed in a single quotes.(' ')

## Escape sequences
|Character|Name|Meaning of use|
|---------|----|------------ |
|\n|new line|Takes cursor on new line|
|\r|Carriage returen|Takes cursor at the start of current line.|
|\t|Tab|Takes cursor 8 character ahead.|
|\f|Form feed|Used in context of printer.|
|\b|Backspace|Moves cursor one character back of current position.|
|\a|Alarm|Gives a small beep.|
|\\'|Single quote|Prints single quote.|
|\\"|Double quote|Prints double quote.|
|\\\\\|Backslash|Print Backslash.|
|\ooo|Octal ASCII|Prints character with octal ASCII value.'\101' prints 'A'(Octal 101=decimal 65)|
|\xhh|hexadecimal ASCII|Prints character with hex ASCII value '\x41'prints 'A'(hex 41=decimal 65)|


## String constants		

One or more character enclosed in double quotes forms a string constant.
String constants are very often needed in program to print some messages.

## Format specifier	

|char|%c|
|----|--|
|int|%d or %i|
|float|%f|
|double|%lf|							  
										  
## printf and scanf			

**printf()**
standard output functions used to print some set of character or value of variables on console.
e.g. printf("sum:%d,avg:%f,s:23.4f);

**scanf()**
standard input function used to input values from user and assign to corrosponding variables.
e.g. scanf("%d %f",&num1,&num2);


## Arithmetic Instructions		

To perform arithmetic operations between variables and constants.
Arithmetic operations are performed using arithmetic and assignment operators.
Variables and constants are called as operands and are operated by arithmetic operators.
During execution expression on right hand side is evaluated and result is assigned to the variable at left hand side.
e.g. x=x+1;
     si=prin*noy*roi/100.0;
	 
Arithmetic operators can be integers,real numbers.

## Type conversion		

|Operation|Remark|
|---------|------|
|5/2=2 |No conversion|
|5.0/2=2.5|2 is converted to 2.0(double)| 
|5/2.0f=2.5f|5 is converted to 5.0f(float)|
|5.0f/2.0=2.5|5.0f is converted to 5.0(double)|
|(double)5/2=2.5|5 is explicitly converted to double,2 is converted to double|


