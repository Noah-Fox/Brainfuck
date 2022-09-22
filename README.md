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

    interpreter.cc     -bf interpreter

