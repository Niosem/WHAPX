//Variables
var Files = $FilesSelected
var MailNetwork = $Email

//functions
define([
    'niosem-engine',
    'niosemEngine'
], function TransferReceive(niosem_engine_v0_01, niosem_node_V2) {
    'use strict';
    //networking
    network.connectedToNetwork(OS ,networkConnectedOS)

    //transfer
    File.getFiles(Files)
    network.Transfer(MailNetwork)
    network.SendPacket(Files, MailNetwork)
});

define([
    'niosem-engine',
    'niosemEngine'
], function TranferSend(niosem_engine_v0_01, niosem_node_V2) {
    'use strict';
    //networking
    network.connectedToNetwork(OS ,networkConnectedOS)

    //transfer
    File.getFiles(Files)
    network.Transfer(MailNetwork)
    network.SendPacket(Files, MailNetwork)
});