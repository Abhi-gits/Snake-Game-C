# Snake-Game-C

* The Compiler must be pre-installed 

* Run the ***make*** command to compile all the files, and indeed to run the game. 

  ***make clean** -> deletes the executable file*

  ***./snake <snake row> <snake column> <snake size>*** - for giving the input details via the command line.

  

* This is snake game is has also an unbeatable condition where snake can't cut itself

* For that commands are ->
    *  ***make UNBEATABLE = 1***
    *  ***.\snake 30 40 10*** (make sure that the size of the snake is less than the size of row and column)


# Rules to play :
*  navigate through ***s*** for ***downward***, ***w*** for ***upward***, ***a*** for ***leftward*** and ***d*** for ***rightward***
*  it will die when it cut itself, except unbeatable situation
*  can't move backward

# System Requirement :
*  gcc version c89
*  require make softaware
*  will work only on command from keyboard