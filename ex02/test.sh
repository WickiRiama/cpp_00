#! /bin/bash

if [ ! -e ./account ] || [ ! -x ./account ]; then
	echo -e '\033[0;33m' There is no executable file named account '\033[0m'
else
	./account > logs/mylog.log
	cat logs/19920104_091532.log | awk '{print $2}' > original_col2
	cat logs/mylog.log | awk '{print $2}' > my_col2
	diff original_col2 my_col2 > logs/differences
	oldps1="$PS1"
	if [ -s logs/differences ]; then
		echo -e '\033[0;31m'
		cat logs/differences;
		echo -e '\033[0m'
	else
		echo -e '\033[0;32m' OK '\033[0m'
	fi
	rm original_col2
	rm my_col2
fi
