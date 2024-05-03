echo "Enter two numbers:"
read num1
read num2
 
if(($num1==$num2))
then 
echo "$num1 and $num2 are equal"

else if(($num1<$num2))
then
echo "$num2 is greater than $num1"
else
echo "$num1 is greater than $num2"
fi
fi


