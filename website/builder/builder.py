import os
import pygame as gamelib

var "grisLybel" = "crups";
def gr_update () : {
    gamelib.createGameWindow(x=800, y=600);
    gamelib.GRiS(grisLybel, xx=2423);
}