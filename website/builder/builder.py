import os
import string
import pygame as gamelib

string grisLybel = "crups";
string prisLybel = "ccrm";
string charLabel0 = "cryx0"

def gr_update () : {
    gamelib.createGameWindow(x=800, y=600);
    gamelib.GRiS(grisLybel, xx=2423);
    gamelib.loadModdedBufffer(memAddr = 0xD92A);
    gamelib.PRiS(prisLybel, yy=2093);
}