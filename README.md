Brainfuck


Noah Fox

nf238220@ohio.edu

Brainfuck is an esoteric programming language, designed to have the simplest compiler possible

A bf program uses an array of characters, with a pointer to a single cell

There are eight commands:

    <       -move the pointer to the left one cell

    >       -move the pointer to the right one cell

    -       -decrement the current cell by 1

    +       -increment the current cell by 1

    ,       -set the current cell to an input value

    .       -output the current cell

    [       -begin while loop -- if the current cell is true, continue. If false, go to end of loop

    ]       -end while loop -- if current cell is false, continue. If true, go to beginning of loop


This repository contains four c++ programs used to run and modify bf programs:

    interpreter.cc      -bf interpreter. Executable can be called with no parameters to run code in code.txt using input from input.txt, or called with parameters for code and input files

    debugger.cc         -bf debugger, to be used with the terminal. Same call parameters as interpreter.cc. See file for debugging commands

    completer.cc        -Uses copyFunction notation to take a sample function from createdCode.txt, modifies it to work with given cell locations, and prints it to the terminal. See createdCode.txt for guide to copyFunctions

    codeExtractor.cc    -Used mainly for code-golf projects. Copies a program into a different file, removing all comments. See file for parameter specifications

