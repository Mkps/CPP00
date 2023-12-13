RED="\033[31m"
GREEN="\033[32m"
NC="\033[0m"
c++ -Wno-deprecated -Wall -Wextra -Werror --std=c++98 Account.cpp tests.cpp -o Account> /dev/null
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
./Account > tmp_I
cat -e tmp_I | cut -c 19- > cut_I
cat -e 19920104_091532.log | cut -c 19- > cut_O
diff cut_I cut_O
exit_code=$?
if [ $exit_code -eq 0 ]
then
	result="OK"
	color=$GREEN
else
	result="KO"
	color=$RED
fi
printf "Output matches previous log when timestamp is truncated:	${color}[%s]\n${NC}" $result
