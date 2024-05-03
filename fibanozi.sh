echo "Enter the limit"
read limit
echo -e "Fibonocci Series"
a=0
b=1
echo -e "$a \n$b"
for ((i=1;i<=$((limit-2));i++))
do
c=$(($a+$b))
echo "$c"
a=$b
b=$c
done
