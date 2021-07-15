## Control Structures in C
control instructions are used to control the flow of execution of the program.
program execution starts with first statement in the block of main() function and consecutive statements are executed till the end of the block.

There are five types of control instructions in C:

## Sequence control instructions.
Sequence control instructions ensures that the instructions are executed in the same order in which they are written.

## Descision control instructions.
Descision control instructions are used to take descisions,which instruction is to be executed next based on some condition(whether it is true or false)
They are implemented in C language using if,else,keywords and conditional operator.

## Case control instructions.
Case control instructions are used select a particular option from a set of alternatives.
It allows executing a certain set of statements out of many depending on some values.

## Loop control instructions.
Loop control instructions are used to executes a group of instructions number of times.
The set of instructions will be repeated till the same condition is true.

## Jump Instructions.
Jump instructions are used to jump from the current statement to some other statement in the block of function.

## If statement 
If the given coondition is true,block of statements is executed,otherwise the statements within the block are skipped and the execution arrives from next statement after the block.
Generally,the condition is expressed using relational operators and combined using logical operators.
There is single statement in if block (or any other control structure block),writing curly{}braces is optional.
It is good practice to write these curly braces along with proper indentation,will improve readability of code.

## If else statement
If the given condition is true,block of statements followed by if block is executed otherwise,
if the given (condition is not true)the block followed by else is executed.
Else block should be immediate after if block.

## Conditional operator
Syntax of conditional operator is (conditon)?expression1:expression2;
If the given condition is true,expression 1 is evaluated,otherwise expression 2 is evaluated.
Generally conditonal operator appears to the right side of the assignment operator.
It is possible to have nested if statements and nested conditional operators.

## Nested If block
Defining if block inside another if block.

## Case control instructions 
Many times there is no need to execute some set of instructions depending on the option selected from the set of availaible choises.
For this C have few keywords.
Switch,Case,Break,Default.

## Swich 

For e.g.constant 1 and constant 2 are called case constants.
They must be integral type;floating point constants are not allowed. 	
The set of instructions followed by matching case is executed.
These instructions continue till break is reached.
So writing break keyword after last case is not required.
If the result of integer expression do not match with any of the constant,then the statement corrosponds by the default case is executed.
When the set of instructions within the matching case are executed,control comes out of switch and continues to execute next statement after switch block.


The switch statement is best suited to implement the menu driven program.
In a menu driven program number of choises offered to user,out of which any one selectd at a time.
The code corrosponding to each menu item is written under particular case.
Using a loop the menu is repeated and particular task is done according to user's selection.
Hence the program is called menu driven program.
