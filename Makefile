i3sleep:
	g++ i3sleep.cpp -o i3sleep

install: i3sleep
	cp ./i3sleep /usr/bin/i3sleep
