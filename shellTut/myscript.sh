# VARIABLE 
# Upper case by convention
# letter number underscore

# NAME="Jack"

# echo "My name is $NAME"

# echo "My name is ${NAME}"

# read i/p from user 

# read -p "Enter your name " NAME
# echo "Hello $NAME, nice to see you!"

# if [ "$NAME" == "Pranav" ] 
# then
# 	#statements
# 	echo "ur name is Pranav"
# fi

# if [ "$NAME" == "Pranav" ]
# then
	# echo "ur name is Pranav"
# fi

# if [ "$NAME" == "Pranav" ]
# 	then
# 		echo "ur name is Pranav"
# 	else
# 		echo "ur name is not pranav"
# fi

# if [ "$NAME" == "Pranav" ] 
# then
# 	echo "ur name is Pranav"
# elif [ "$NAME" == "Jack" ]
# then
# 	echo "ur name is Jack"
# else
# 	echo "ur name is not pranav or Jack"
# fi

# NUM1=3
# NUM2=2
# if [ "$NUM1" -gt "$NUM2" ]
# then
# 	echo "$NUM1 is greater than $NUM2"
# else
# 	echo "$NUM1 is less than $NUM2"
# fi
#######
# val1 -ne val2 return true if both are eq 
# val1 -gt val2 ret true if val 1 is greater than val2
# val1 -ge val2 ret true if val 1 is greater than or eq val2
# val1 -lt val2 ret true if val 1 is less than val2
# val1 -le val2 ret true if val 1 is less or eq than val2
# 
#
#
##############
#file condition
# -d for dir
# -f if file
# -g if grp id is set
# -r if read is set
# -s true if file is non zero size
# -u true if user id is set
# -w true if file is writable
# -x true if file is executable
###########

# FILE="abc.txt"
# if [ -f "$FILE" ]
# then
# 	echo "$FILE is a file"
# else
# 	echo "$FILE is not a file"
# fi

# ********SWitch *********

# read -p "Are you 21+ ?  Y/N " ANS
# case "$ANS" in
# 	[yY] | [yY][eE][sS])
# 		echo "you can have BEER :)"
# 		;;
# 	[nN] | [nN][oO])
# 		echo "Sorry, No Drinks, till watch pogo"
# 		;;
# 	*)
# 		echo "please enter valid input yes/no"
# 		;;
# esac

## Simple for loops
# NAMES="Pranav Shalaka Rucha Rachel Ross Monica"
# for NAME in $NAMES
# # do
# 	echo "Hello $NAME"
# done

# for loop to rename files
# FILES=$(ls *.txt)
# NEW="new"
# for FILE in $FILES
# 	do
# 		echo "Remaning $FILE to new-$FILE"
# 		mv $FILE $NEW-$FILE
# 	done

# read through file line by line
# LINE=1
# while read -r CURRENT_LINE
# do
# 	echo "$LINE: $CURRENT_LINE"
# 	((LINE++))
# done < "./abc1.txt"

#FUNCTIONS

# function sayHello(){
# 	echo "Fuck the society"
# }
# sayHello


# fun with para
# function greet(){
# 	echo "Hello, I am $1 and I am from $2"
# }

# greet "Pranav" "PUNE"

# create folder and write a file

# mkdir Hello
# touch "Hello/world.txt"
# echo "Hello world " >> "Hello/world.txt"
# echo "created Hello/world.txt"
