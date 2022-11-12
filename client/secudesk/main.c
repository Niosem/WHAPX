//Libraries
    #include <stdio.h>
    #include "./src/api-controller.h"
    #include <regex.h>

    //unicode
        #include <unicode/localpointer.h>
        #include <unicode/parseerr.h>
        #include <unicode/platform.h>
        #include <unicode/ptypes.h>
        #include <unicode/putil.h>
        #include <unicode/stringoptions.h>
        #include <unicode/uchar.h>
        #include <unicode/uconfig.h>
        #include <unicode/ucpmap.h>
        #include <unicode/uidna.h>
        #include <unicode/uiter.h>
        #include <unicode/umachine.h>
        #include <unicode/uregex.h>
        #include <unicode/urename.h>
        #include <unicode/ustring.h>
        #include <unicode/utext.h>
        #include <unicode/utf.h>
        #include <unicode/utf16.h>
        #include <unicode/utf8.h>
        #include <unicode/utf_old.h>
        #include <unicode/utypes.h>
        #include <unicode/uvernum.h>
        #include <unicode/uversion.h>

    //Security / Secure
        #include <security/openpam.h>
        #include <security/openpam_attr.h>
        #include <security/openpam_version.h>
        #include <security/pam_appl.h>
        #include <security/pam_constants.h>
        #include <security/pam_modules.h>
        #include <security/pam_types.h>
        #include <secure/_common.h>

        //Audit
            #include <security/audit/audit_ioctl.h>

    //Apache2
        #include <apache2/apache_noprobes.h>
    
        //ap_
            #include <apache2/ap_compat.h>
            #include <apache2/ap_config.h>
            #include <apache2/ap_config_auto.h>
            #include <apache2/ap_config_layout.h>
            #include <apache2/ap_expr.h>
            #include <apache2/ap_hooks.h>
            #include <apache2/ap_listen.h>
            #include <apache2/ap_mmn.h>
            #include <apache2/ap_mpm.h>
            #include <apache2/ap_provider.h>
            #include <apache2/ap_regex.h>
            #include <apache2/ap_regkey.h>
            #include <apache2/ap_regkey.h>
            #include <apache2/ap_slotmem.h>
            #include <apache2/ap_socache.h>
    
        #include <apache2/cache_common.h>
        #include <apache2/heartbeat.h>
        #include <apache2/httpd.h>
    
        //http_
            #include <apache2/http_config.h>
            #include <apache2/http_connection.h>
            #include <apache2/http_core.h>
            #include <apache2/http_log.h>
            #include <apache2/http_main.h>
            #include <apache2/http_protocol.h>
            #include <apache2/http_request.h>
            #include <apache2/http_ssl.h>
            #include <apache2/http_vhost.h>
    
        //modperl_
            #include <apache2/modperl_apache_compat.h>
            #include <apache2/modperl_apache_includes.h>
            #include <apache2/modperl_apr_compat.h>
            #include <apache2/modperl_apr_includes.h>
            #include <apache2/modperl_apr_perlio.h>
            #include <apache2/modperl_bucket.h>
            #include <apache2/modperl_callback.h>
            #include <apache2/modperl_cgi.h>
            #include <apache2/modperl_cmd.h>
            #include <apache2/modperl_common_includes.h>
            #include <apache2/modperl_common_log.h>
            #include <apache2/modperl_common_types.h>
            #include <apache2/modperl_common_util.h>
            #include <apache2/modperl_config.h>
            #include <apache2/modperl_const.h>
            #include <apache2/modperl_constants.h>
            #include <apache2/modperl_debug.h>
            #include <apache2/modperl_directives.h>
            #include <apache2/modperl_env.h>
            #include <apache2/modperl_error.h>
            #include <apache2/modperl_filter.h>
            #include <apache2/modperl_flags.h>
            #include <apache2/modperl_global.h>
            #include <apache2/modperl_gtop.h>
            #include <apache2/modperl_handler.h>
            #include <apache2/modperl_hooks.h>
            #include <apache2/modperl_interp.h>
            #include <apache2/modperl_io.h>
            #include <apache2/modperl_io_apache.h>
            #include <apache2/modperl_largefiles.h>
            #include <apache2/modperl_log.h>
            #include <apache2/modperl_mgv.h>
            #include <apache2/modperl_module.h>
            #include <apache2/modperl_options.h>
            #include <apache2/modperl_pcw.h>
            #include <apache2/modperl_perl.h>
            #include <apache2/modperl_perl_global.h>
            #include <apache2/modperl_perl_global.h>
            #include <apache2/modperl_perl_includes.h>
            #include <apache2/modperl_perl_pp.h>
            #include <apache2/modperl_perl_unembed.h>
            #include <apache2/modperl_svptr_table.h>
            #include <apache2/modperl_sys.h>
            #include <apache2/modperl_time.h>
            #include <apache2/modperl_tipool.h>
            #include <apache2/modperl_trace.h>
            #include <apache2/modperl_types.h>
            #include <apache2/modperl_util.h>
            #include <apache2/modperl_xs_sv_convert.h>
            #include <apache2/modperl_xs_typedefs.h>
            #include <apache2/modperl_xs_util.h>
        
        //mod_
            #include <apache2/mod_auth.h>
            #include <apache2/mod_cache.h>
            #include <apache2/mod_cgi.h>
            #include <apache2/mod_core.h>
            #include <apache2/mod_dav.h>
            #include <apache2/mod_dbd.h>
            #include <apache2/mod_include.h>
            #include <apache2/mod_log_config.h>
            #include <apache2/mod_perl.h>
            #include <apache2/mod_proxy.h>
            #include <apache2/mod_request.h>
            #include <apache2/mod_rewrite.h>
            #include <apache2/mod_session.h>
            #include <apache2/mod_so.h>
            #include <apache2/mod_ssl.h>
            #include <apache2/mod_ssl_openssl.h>
            #include <apache2/mod_status.h>
            #include <apache2/mod_unixd.h>
            #include <apache2/mod_watchdog.h>
        
        #include <apache2/mod_xml2enc.h>
        #include <apache2/mpm_common.h>
        #include <apache2/os.h>
        #include <apache2/scoreboard.h>
        #include <apache2/unixd.h>

        //util_
            #include <apache2/util_cfgtree.h>
            #include <apache2/util_charset.h>
            #include <apache2/util_cookies.h>
            #include <apache2/util_ebcdic.h>
            #include <apache2/util_fcgi.h>
            #include <apache2/util_filter.h>
            #include <apache2/util_ldap.h>
            #include <apache2/util_md5.h>
            #include <apache2/util_mutex.h>
            #include <apache2/util_script.h>
            #include <apache2/util_time.h>
            #include <apache2/util_varbuf.h>
            #include <apache2/util_xml.h>
    
    //Ruby
        #include <Ruby/ruby.h>

        //ruby
            #include <Ruby/ruby/backward.h>
            #include <Ruby/ruby/config.h>
            #include <Ruby/ruby/debug.h>
            #include <Ruby/ruby/defines.h>
            #include <Ruby/ruby/digest.h>
            #include <Ruby/ruby/encoding.h>
            #include <Ruby/ruby/intern.h>
            #include <Ruby/ruby/io.h>
            #include <Ruby/ruby/missing.h>
            #include <Ruby/ruby/onigmo.h>
            #include <Ruby/ruby/oniguruma.h>
            #include <Ruby/ruby/rb_mjit_min_header-2.6.10-arm64e.h>
            #include <Ruby/ruby/rb_mjit_min_header-2.6.10-x86_64.h>
            #include <Ruby/ruby/rb_mjit_min_header-2.6.10.h>
            #include <Ruby/ruby/re.h>
            #include <Ruby/ruby/regex.h>
            #include <Ruby/ruby/ruby.h>
            #include <Ruby/ruby/st.h>
            #include <Ruby/ruby/subst.h>
            #include <Ruby/ruby/thread.h>
            #include <Ruby/ruby/thread_native.h>
            #include <Ruby/ruby/util.h>
            #include <Ruby/ruby/version.h>
            #include <Ruby/ruby/vm.h>


//MemoryDefine


int main() {
    ReadApi();
}
