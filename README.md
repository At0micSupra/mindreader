# mindreader
```
                                          _                
 _ __ ___   ___ _ __ ___   _____  ___ __ | | ___  _ __ ___ 
| '_ ` _ \ / _ \ '_ ` _ \ / _ \ \/ / '_ \| |/ _ \| '__/ _ \
| | | | | |  __/ | | | | |  __/>  <| |_) | | (_) | | |  __/
|_| |_| |_|\___|_| |_| |_|\___/_/\_\ .__/|_|\___/|_|  \___|
                                   |_|                     
```
(the original name was memexplore)

### What is this?
This is just a simple set of programs I designed to read the contents of RAM. On modern systems, it doesn't work all that well due to OSes erasing RAM before giving it to you.


### memexlore/termex.c
This program just explores some local RAM after a string, and writes it on your terminal screen. A bit weird, just experiementing with two completely seperate tasks at the same time.

### mindreader.c
This program reads RAM by mallocing small segments, growing larger and larger with each iteration. This is because allocating the same size will give you the same memory location, while changing it forces it to at least sometimes give you more memory. Again, it doesn't really work well beyond some small size because eventually you just run into a lot of zeroed memory.


### mindreader.c@stupid()
This method ends in a memory access violation, but at least it's really simple

