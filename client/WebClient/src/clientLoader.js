function Load_PreloadEnvironement(qrt = true) {
    function Expand_Preload(qrt = true) {
        env.load(PreLoadWolf, version = "0.0.01", filePath = "file:///localhost/whapx/env/preloader_env.tar.gz")
        archive.expand(archivePath = "localhost/whapx/env/preloader_env.tar.gz", uzPath = "file:///localhost/tmp/pr.tar")
        archive.untar(tarPath = "file:///localhost/tmp/pr.tar", utPath = "file:///localhost/whapx/env/preloader_env")
        file.delete(filePath = "file:///localhost/tmp/pr.tar")}
    
    Expand_Preload()

    function Preload_Start() {
        directory.change(path = "file:///localhost/whapx/env/preloader_env")
        shell.command("./pr_start.sh")
    }

    Preload_Start()
}

Load_PreloadEnvironement()