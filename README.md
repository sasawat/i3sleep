# i3sleep
A quick program that runs i3lock then sleeps

I originally had this as a bash alias, but dmenu didn't load my aliases, so I wrote this. 

Install with: 

make && make install

Running i3sleep does the equivalent of i3lock && systemctl suspend

the first line of ~/.config/i3lock/config will be appended to the i3lock command so you can do stuff like set an image/etc
