README for my chess project, which will be in C++.  This is my first C++ project ever.

After thinking a little bit about how I want to implement this, I think I'm going to try to implement the mechanics of the game first and get it working before I make graphics.  So to start I have the board represented by a 2-D array of ints, where different numbers represent the different pieces, or lackthereof.  For example, here's what the initial board setup looked like when I first printed it out:

4 2 3 5 6 3 2 4\
1 1 1 1 1 1 1 1\
0 0 0 0 0 0 0 0\
0 0 0 0 0 0 0 0\
0 0 0 0 0 0 0 0\
0 0 0 0 0 0 0 0\
1 1 1 1 1 1 1 1\
4 2 3 5 6 3 2 4

...where pawns = 1, knights = 2, bishops = 3, rooks = 4, queens = 5, kings = 6, and empty squares = 0.  I then changed my mind about the 2-D array and went to a 1-D array for simplicity's sake, though maybe I'll regret that once I start manipulating the board.

Using my 1-D array, I've made a formula that converts from algebraic chess notation (i.e. Bc4) coordinates to the index of the appropriate square in the board array.  The formula is ((8 - Rank) * 8) + File = Index.

A quick note is that I'm not error checking my input for moves, etc because I hope that this will eventually be a GUI that will handle that error checking itself.  So the error checking will be done later on I guess.
