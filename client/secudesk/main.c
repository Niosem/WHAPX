//Libraries
    #include <stdio.h>
    #include "./src/api-controller.h"

    //Security
        #include <security/openpam.h>
        #include <security/openpam_attr.h>
        #include <security/openpam_version.h>
        #include <security/pam_appl.h>
        #include <security/pam_constants.h>
        #include <security/pam_modules.h>
        #include <security/pam_types.h>

        //Audit
            #include <security/audit/audit_ioctl.h>


//MemoryDefine


int main() {
    ReadApi();
}
