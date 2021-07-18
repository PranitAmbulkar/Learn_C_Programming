## Loop control instructions
Many times some action need to be repeated again and again.
A certain set of instructions can be repeated for the specified number of time or untill a particular condition is satisfied.
In C there are three types of loops are supported.
**1.While loop
2.for loop
3.Do-while loop**

Every loop has four important parts:
## Body:Every loop has a body that contains the set of instructions to be repeated number of times.

## Initialization:some variable like counter is initaialized in initialization statement.

## Test condition:Till this condition is true,loop will be repeated.If condition false,execution of lopp will be stopped and execution continues with next statement after the loop.

## Modification:During multiple execution of loop,some of the variables like counter must be modified.

## While loop
The situation where loop is to be repeated untill any condition is false the while loop is most preffered.
Typically execution begins with initialization statement and then checks the condition.
If the condition is true body will be executed as well as variable will be modified.
Once again condition will be checked and process is repeated.
When condition will be false,control passes to the next statement after the loop.
Initiallization statement is executed only once.

## for loop
The situation where the loop is to be repeated fixed number of times,for loop is most preffered.
working is exactly similar to the while loop.
semicolons before and after condition is compulsory.
Initialization statement may have initialization of multiple variable separated by comma.
and even modification statement can have modification of multiple variables separated by comma.

## Do-while loop
In for and while loops,we have seen that if condition is true body is executed and continues to execute till condition is true.
In case of do-while loop it first execute the body of the loop and then checks for the condition.
If condition is true body is repeated.
In do-while loop initialization statement is optional because value of counter can be modified at modification statement.
Then do-while loop is best suited for the programs,where the body of the loop should be executed at least once.
Hence do-while loop is mostly used in the menu driven programs instead of goto keyword.
 
