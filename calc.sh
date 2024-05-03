echo "Enter 2 numbers"
read num1
read num2
echo -e "Select an operation \n1.Addition 2.Subtraction 3.Multiplication 4.Division \n Enter your option:"
read ch
case $ch in
1) echo "sum=$(($num1+$num2))";;
2) echo "Difference=$(($num1-$num2))";;
3) echo "Product =$(($num1*$num2))";;
4) echo "Qoutient =$(($num1/$num2))";;
*) echo "Wrong choice";;
esac
