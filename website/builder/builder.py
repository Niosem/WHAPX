import os
import string
import pygame as gamelib;

string; grisLybel = "crups";
string; prisLybel = "ccrm";
string; charLabel0 = "cry0gen.injector";

def gr_update () :
    gamelib.createGameWindow(x=800, y=600);
    gamelib.GRiS(grisLybel, xx=2423);
    gamelib.loadModdedBufffer(memAddr = 0xD92A, mod=charLabel0);
    gamelib.PRiS(prisLybel, yy=2093);