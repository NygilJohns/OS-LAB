echo "Enter the number"
read num
a=1
b=1
for ((i=1;i<=$num;i++))
do
     a=$(($a*$i))
     done
     echo "Factorial of $num is $a"                                                                                    
