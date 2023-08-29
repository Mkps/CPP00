RED="\033[31m"
GREEN="\033[32m"
NC="\033[0m"
make re > /dev/null
exit_code=$?
if [ $exit_code -eq 0 ]
then
	result="OK"
	color=$GREEN
else
	result="KO"
	color=$RED
fi
printf "The program compiles:	${color}[%s]\n${NC}" $result
TEST1='shhhhh... I think the students are asleep...'
TEST1_OUTPUT="SHHHHH... I THINK THE STUDENTS ARE ASLEEP..."
printf '%s	' "Test1: $TEST1"
./megaphone "$TEST1" > test1.txt
printf '%s\n' "$TEST1_OUTPUT" | diff test1.txt -
exit_code=$?
if [ $exit_code -eq 0 ]
then
	result="OK"
	color=$GREEN
else
	result="KO"
	color=$RED
fi
printf "${color}		[%s]\n${NC}" $result
TEST2='Damnit " ! " "Sorry students, I thought this thing was off."'
TEST2_OUTPUT="DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF."
printf '%s	' "Test2: $TEST2"
printf '%s	' "$TEST2" | xargs ./megaphone > test2.txt
printf '%s\n' "$TEST2_OUTPUT" | diff test2.txt -
exit_code=$?
if [ $exit_code -eq 0 ]
then
	result="OK"
	color=$GREEN
else
	result="KO"
	color=$RED
fi
printf "${color}[%s]\n${NC}" $result
TEST3_OUTPUT="* LOUD AND UNBEARABLE FEEDBACK NOISE *"
printf '%s	' "Test3: No arguments"
./megaphone > test3.txt
printf '%s\n' "$TEST3_OUTPUT" | diff test3.txt -
exit_code=$?
if [ $exit_code -eq 0 ]
then
	result="OK"
	color=$GREEN
else
	result="KO"
	color=$RED
fi
printf "${color}						[%s]\n${NC}" $result
rm test1.txt test2.txt test3.txt
