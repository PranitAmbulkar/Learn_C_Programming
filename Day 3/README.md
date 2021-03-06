## Classification of operator based on number of operands 
**Unary**=These operators need single operand.e.g.++,--,unary+,unary-,etc.
**Binary**=These operators need two operands,e.g.+,-,*,&&,||,<,>,etc.
**Ternary**=This operator(?:) needs three operands.

## Classification of operator based on its catagory

## Arithmetic operators
The arithmetic operators are +,-,*,% Along with these operators,there is one more arithmetic operator called as modulus %operator.

## Assignment and Shorthand operators
Assignment operator is used to assign value of an expression to some variable.
Left hand side of assignment operator must be some variable,while right hand side can be any expression formed with variables and/or constants.
e.g. x+=3 is same as x=x+3
There are many shorthand operators like +=,-=,*=,/=,%=,&=,|=,etc.

## Relational operator.
Relational operators are mainly used to compare two operands.There are 6 relational operators.They are <,>,<=,>=,==,!=
The result of these operations can be 0(false) or 1(true).

## Logical operators
Logical operators are mainly used to combine two conditions or negate a condition.
They are &&(logical and),||(logical or),!(logical not)

**Logical and(&&)**
It results false if any one condition is false.
It results true if both conditions are true.

**Logical OR(||)**
It results true if any one conditon is true.
It results false if both conditions are false.

**Logical NOT(!)**
It results false if given condition is true.
It results true if given condition is false.

## Bitwise operator
Bitwise operators can be applied on integral types.
They work on binary bit pattern corrosponding to that number.
bitwise operators are heavily required for accessing system features,where certain bits are used to represent certain functions.
They are

|Operator|Name|
|--------|----|
|&|Bitwise and|
|~|Bitwise NOT|
|^|Bitwise XOR|
|<<|Left shift|
|>>|Right shift|

## Increment operator
++ is the increment operator that increments the value of the variable by 1.
It is the unary operator and its operand must be variable.

**pre-increment operator**
Here value of the variable is first incremented and then used in expression(modified value will be used syntactically the operator will precede the operand)

**post increment operator**
Here value of the variable is first used in expression.(old value will be used)and then it is modified.

## Decrement operator
-- is the decrement operator that decrements the value of the variable by one.
It is the unary operator and its operand must be variable.

**pre-decrement operator**
Here value of the variable is first decremented and then used in the expression.

**post-decrement operator**
Here value of the variable is first used in expression(old value will be used)and then it is modified.

## Comma operator
Comma operator allows combining multiple expressions.
All these expressions are evaluated from left to right order.
