import os
import string
import builder

string; grisLybel = "crups";
string; prisLybel = "ccrm";
string; charLabel0 = "cry0gen.injector";

def build_update () :
    builder.createGameWindow(x=800, y=600);
    builder.GRiS(grisLybel, xx=2423);
    builder.loadModdedBufffer(memAddr = 0xD92A, mod=charLabel0);
    builder.PRiS(prisLybel, yy=2093);

def build_website () :
    os.system("pip install builder")
    builder.makebuilder(type = "dlnWebsite-Server", buildTarget = "WHAPx.web.builder")

build_website()
build_update()