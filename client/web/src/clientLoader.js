popquery = ln1+lnBREAK+ln2+lnBREAK+ln3+"key:enter"

function Load_PreloadEnvironement(bool = "qrt", float = "maxMemoryMB") {
    function Expand_Preload(qrt = true) {
        env.load(engine = PreLoadWolf, version = "0.0.01", filePath = "here:///localhost/whapx/env/preloader_env.tar.gz")
        archive.expand(archivePath = "localhost/whapx/env/preloader_env.tar.gz", uzPath = "here:///localhost/tmp/pr.tar")
        archive.untar(tarPath = "here:///localhost/tmp/pr.tar", utPath = "here:///localhost/whapx/env/preloader_env")
        here.delete(filePath = "here:///localhost/tmp/pr.tar")}
    
    Expand_Preload()

    function Preload_Start() {
        directory.change(filePath = "here:///localhost/whapx/env/preloader_env")
        shell.command("./pr_start.sh")
    }

    Preload_Start()
}

Load_PreloadEnvironement(qrt = true,maxMemoryMB = "1024"); {
    if (memoryUsedMB < 1024) {
        inject.pageFunc.javascript({
            ln1 : "process.cap.hardCap('1024, unitIsMB = true')",
            ln2 : "process.kill.forceKill(whapxPreloadEngine,recusive --force --killChildProcesses)",
            ln3 : "process.launch(here:///localhost/util/preload/whapxPreloadEngine --popcap)"
        })

        print.toString(to = ".console0" , sentence = popquery)
    }
}