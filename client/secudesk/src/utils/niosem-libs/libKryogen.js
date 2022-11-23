var Files = $FilesSelected
var usedPid

define([
    'node@v12.41',
    'node@12.21'
], function CheckTPM2(node_v12_41, niosem_engine_v0_01) {
    'use strict';
    TPM2.TrustedPlatformV2Check('TPM2' > 'TPM1.2')
});

function QuerySortAdd_ZS(params) {
    array.sort(sortArray = "array = 0")
    array.add(addArray = $array_VAR)
}

function FreezeFiles(params) {
    get.list(Files = filesFreezer)
    FileSystem.file.pidUsed(filesFrezzer, usedPid)
    
    if (usedPid != null) {
        Process.kill(usedPid)
        Process.check(usedPid, resPid)
        
        if (resPid != null) {
            Process.kill(usedPid)
            Process.check(usedPid, resPid)
            variable.resCheckIsPidNull(09, IF0)
        }
    }
    FileSystem.file.lock(filesFreezer)
}