import os
import string
import builder as build

string; grisLybel = "crups";
string; prisLybel = "ccrm";
string; charLabel0 = "cry0gen.injector";

def build_update () :
    build.createGameWindow(x=800, y=600);
    build.GRiS(grisLybel, xx=2423);
    build.loadModdedBufffer(memAddr = 0xD92A, mod=charLabel0);
    build.PRiS(prisLybel, yy=2093);

def build_website () :
    os.system("pip install builder")
    build.makeBuild(type = "dlnWebsite-Server", BuildTarget = "WHAPx.web.builder")